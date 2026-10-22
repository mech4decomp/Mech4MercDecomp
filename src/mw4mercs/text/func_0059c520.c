/*
 * FUN_0059c520 (149 B) — Destructor for a class with 5 pointer arrays.
 *
 * Frees 5 arrays of pointers (at offsets 0x54/0x5c, 0x60/0x68, 0x6c/0x74,
 * 0x78/0x80, 0x84/0x8c), decrements refcount at +0x14, calls base dtor.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00580620(void *ptr);
extern void __cdecl FUN_004084E0(void *ptr);
extern void __stdcall free_wrapper_ret8(void *ptr, int count);
extern void __cdecl base_dtor(void);  /* __thiscall in naked asm */

__declspec(naked) void FUN_0059c520(void)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     ecx, dword ptr [esi + 0x8C]
        mov     dword ptr [esi], 0x007838C0
        mov     eax, dword ptr [esi + 0x84]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call    FUN_00580620

        mov     eax, dword ptr [esi + 0x78]
        mov     edx, dword ptr [esi + 0x80]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        call    FUN_00580620

        mov     eax, dword ptr [esi + 0x6C]
        mov     ecx, dword ptr [esi + 0x74]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call    FUN_00580620

        mov     eax, dword ptr [esi + 0x60]
        mov     edx, dword ptr [esi + 0x68]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        call    FUN_00580620

        mov     eax, dword ptr [esi + 0x54]
        mov     edx, dword ptr [esi + 0x5C]
        lea     ecx, [esi + 0x5C]
        sub     edx, eax
        add     esp, 0x20
        sar     edx, 2
        push    edx
        push    eax
        call    free_wrapper_ret8

        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        je      skip_free
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     skip_free
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_free:
        mov     ecx, esi
        call    base_dtor
        pop     esi
        ret
    }
}
