/*
 * Vtable 0x77260C slot 10 — FUN_004D3030 (152 B).
 *
 * Singleton factory: manages a global counter at 0x7DB0C0. On first call
 * (counter == 0), allocates a 0x2C-byte singleton object via FUN_004084C0,
 * initializes it with FUN_00415D70, and stores it in 0x7DB0BC. Then calls
 * FUN_00416F90 to get an item from the singleton, initializes the item
 * with the caller's this (ECX) and param_1, sets vtable 0x772654 and a
 * word from [param_2], and returns the item. Returns NULL if no item.
 *
 * Stack layout at entry: [esp+4]=param_1, [esp+8]=param_2.
 * After push esi + push edi: [esp+0xc]=param_1, [esp+0x10]=param_2.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 * CFLAGS: /O1
 */

extern void * __stdcall FUN_004084c0(int size, void *param);
extern void   __stdcall FUN_00415d70(void *obj, int p1, int p2, int p3, void *ptr, void *global);
extern void * __stdcall FUN_00416110(void);
extern void   __stdcall FUN_00415d40(void *item, void *param);

extern int  DAT_007db0c0;   /* counter */
extern void *DAT_007db0bc;  /* singleton ptr */
extern void *DAT_007b8810;  /* allocator param */
extern void *DAT_007b8c14;  /* constructor param */

__declspec(naked) void __stdcall vtable_factory(void)
{
    __asm {
        /* Phase 1: singleton allocation (first call only) */
        mov     eax, dword ptr [DAT_007db0c0]
        push    esi
        push    edi
        mov     edi, ecx                /* EDI = this (original ECX) */
        mov     ecx, eax
        inc     eax
        test    ecx, ecx
        mov     dword ptr [DAT_007db0c0], eax
        jne     l_have_singleton        /* counter != 0: singleton exists */

        /* Allocate 0x2C bytes */
        mov     edx, dword ptr [DAT_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        je      l_singleton_alloc_failed

        /* Initialize singleton: FUN_00415D70(esi, 0x14, 0x64, 0x64, 0x76CF50, [0x7B8C14]) */
        mov     eax, dword ptr [DAT_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [DAT_007db0bc], esi
        jmp     l_have_singleton

    l_singleton_alloc_failed:
        mov     dword ptr [DAT_007db0bc], 0

    l_have_singleton:
        /* Phase 2: get item from singleton */
        mov     ecx, dword ptr [DAT_007db0bc]
        call    FUN_00416110
        mov     esi, eax                /* ESI = item */
        test    esi, esi
        je      l_return_null           /* no item available */

        /* Phase 3: initialize the item */
        mov     eax, dword ptr [esp + 0xc]   /* EAX = param_1 */
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 4], edi     /* item->field_04 = original this */
        mov     dword ptr [esi + 0xc], eax  /* item->field_0c = param_1 */
        call    FUN_00415d40

        /* Set vtable and name word */
        mov     ecx, dword ptr [esp + 0x10]  /* ECX = param_2 */
        mov     dx, word ptr [ecx]           /* DX = word from [param_2] */
        pop     edi
        mov     dword ptr [esi], 0x772654   /* item->vtable = 0x772654 */
        mov     word ptr [esi + 0x10], dx    /* item->field_10 = name word */
        mov     eax, esi                    /* return item */
        pop     esi
        ret     8

    l_return_null:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
