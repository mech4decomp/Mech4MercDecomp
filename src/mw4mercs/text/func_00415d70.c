/*
 * FUN_00415D70 — Singleton constructor (181 B).
 *
 * Called by Database vtable 0x77260C slot 10 (FUN_004D3030, "vtable_factory")
 * on first call (global counter at 0x7DB0C0 == 0). The factory allocates a
 * 0x2C-byte singleton via FUN_004084C0, then calls this function to initialize
 * it.
 *
 * Initializes the 0x2C-byte singleton object:
 *   +0x00: param_4 (ptr)
 *   +0x04: allocated buffer from FUN_004084c0
 *   +0x08: aligned size for p2 dimension
 *   +0x0C: aligned p1
 *   +0x10: aligned size for p3 dimension
 *   +0x14: buffer + 8 (usable data start)
 *   +0x18: same as +0x14 (head of free list)
 *   +0x1C: 0
 *   +0x20: return value from FUN_006f4710
 *   +0x24: doubly-linked list prev
 *   +0x28: doubly-linked list next
 *
 * Also inserts this singleton into a global circular doubly-linked list
 * rooted at DAT_007b8c18.
 *
 * __thiscall (ECX = this), RET 0x14 (5 stack params).
 * CFLAGS: /O1
 */

/* ---- external functions ---- */
void * __stdcall FUN_006f4710(void *p1, int zero, void *p2);
void * __cdecl   FUN_004084c0(int size, void *param);

/* ---- external globals ---- */
extern void * DAT_007b8c18;  /* global linked-list head */

__declspec(naked) void __stdcall singleton_ctor(void)
{
    __asm {
        /* Entry: ECX = this */
        /* Stack: [esp+0]=ret, [esp+4]=p1, [esp+8]=p2, [esp+0xC]=p3, [esp+0x10]=p4, [esp+0x14]=p5 */

        mov     eax, dword ptr [esp + 0x14]     /* EAX = p5 */
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]     /* EBX = p4 (after push, p4 at esp+0x14) */
        push    esi
        push    edi

        /* Call FUN_006f4710(p4, 0, p5) */
        push    eax                             /* p5 */
        push    0x0                             /* 0 */
        push    ebx                             /* p4 */
        mov     esi, ecx                        /* ESI = this */
        call    FUN_006f4710

        /* ECX = (p1 + 3) & ~3 */
        mov     ecx, dword ptr [esp + 0x10]     /* ECX = p1 */
        add     ecx, 0x3
        and     ecx, 0xfffffffc
        mov     edx, ecx                        /* EDX = aligned_p1 */

        /* EDX = (aligned_p1 * p2 + 0x1007) & ~0xFFF */
        imul    edx, dword ptr [esp + 0x14]     /* EDX *= p2 */
        mov     dword ptr [esi + 0x0c], ecx     /* this->field_0C = aligned_p1 */

        /* ECX = (aligned_p1 * p3 + 0x1007) & ~0xFFF */
        imul    ecx, dword ptr [esp + 0x18]     /* ECX *= p3 */
        add     edx, 0x1007
        and     edx, 0xfffff000
        add     ecx, 0x1007

        lea     edi, dword ptr [edx - 0x8]      /* EDI = aligned_p2_size - 8 */

        push    eax                             /* save retval from FUN_006f4710 */
        mov     dword ptr [esi + 0x20], eax     /* this->field_20 = retval */
        and     ecx, 0xfffff000

        lea     eax, dword ptr [edi + 0x8]      /* EAX = aligned_p2_size */
        sub     ecx, 0x8                        /* ECX = aligned_p3_size - 8 */

        push    eax                             /* push aligned_p2_size */
        mov     dword ptr [esi + 0x08], edi     /* this->field_08 = aligned_p2_size - 8 */
        mov     dword ptr [esi + 0x10], ecx     /* this->field_10 = aligned_p3_size - 8 */
        mov     dword ptr [esi], ebx            /* this->field_00 = p4 */

        call    FUN_004084c0                    /* FUN_004084c0(aligned_p2_size, retval) */

        /* Initialize the allocated buffer */
        mov     dword ptr [eax], 0x0            /* *buffer = 0 */
        mov     dword ptr [esi + 0x04], eax     /* this->field_04 = buffer */
        add     eax, 0x8
        mov     dword ptr [eax - 0x4], edi      /* buffer[1] = aligned_p2_size - 8 */
        mov     dword ptr [esi + 0x14], eax     /* this->field_14 = buffer + 8 */
        mov     dword ptr [esi + 0x18], eax     /* this->field_18 = buffer + 8 */

        /* Check global linked-list head */
        mov     eax, dword ptr [DAT_007b8c18]
        add     esp, 0x8                        /* clean up two pushes */
        test    eax, eax
        mov     dword ptr [esi + 0x1c], 0x0     /* this->field_1C = 0 */
        jne     l_list_not_empty

        /* List is empty: self-pointing circular list */
        pop     edi
        mov     dword ptr [esi + 0x28], esi     /* this->next = this */
        mov     dword ptr [esi + 0x24], esi     /* this->prev = this */
        mov     dword ptr [DAT_007b8c18], esi   /* head = this */
        mov     eax, esi                        /* return this */
        pop     esi
        pop     ebx
        ret     0x14

    l_list_not_empty:
        /* Insert this after the head */
        mov     ecx, dword ptr [eax + 0x28]     /* ECX = head->next */
        mov     dword ptr [esi + 0x28], ecx     /* this->next = head->next */
        mov     dword ptr [esi + 0x24], eax     /* this->prev = head */
        mov     dword ptr [eax + 0x28], esi     /* head->next = this */
        pop     edi
        mov     dword ptr [ecx + 0x24], esi     /* old_next->prev = this */
        mov     eax, esi                        /* return this */
        pop     esi
        pop     ebx
        ret     0x14
    }
}
