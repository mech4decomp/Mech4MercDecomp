/*
 * FUN_005bfa50 (86 B) — Allocating constructor.
 *
 * Allocates 0x4C bytes via FUN_004084d0; on success calls
 * FUN_005bf650(5 params) and stores result into sub-object at this+0x14
 * via FUN_004179b0. On alloc failure stores 0.
 *
 * __thiscall (ECX = this), RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(int size);
extern void *FUN_005bf650(void *p1, void *p2, void *p3, void *p4, void *p5);
extern void FUN_004179b0(void *obj);

__declspec(naked) void *FUN_005bfa50(void)
{
    __asm {
        push    esi
        push    edi
        push    0x4c
        mov     edi, ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_fail
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_005bf650
        mov     esi, eax
        push    esi
        lea     ecx, [edi + 0x14]
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x14
L_alloc_fail:
        xor     esi, esi
        push    esi
        lea     ecx, [edi + 0x14]
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
