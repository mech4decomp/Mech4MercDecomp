/*
 * FUN_00615c10 (266 B) — Destructor-like teardown routine.
 *
 * __thiscall (ECX = this = ESI), RET 0.
 * Sets vtable ptr 0x78c378, tears down sub-objects via virtual calls
 * and helper functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00619b00(void);
extern void __cdecl FUN_00619cf0(void);
extern void __cdecl FUN_00619c80(void);
extern void __cdecl FUN_00619d10(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00615c10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        push    edi
        mov     dword ptr [esi], 0x78c378
        jz      L_615cbe
        mov     eax, dword ptr [esi + 0x40]
        lea     ecx, [esi + 0x40]
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [esi + 0x54]
        lea     ecx, [esi + 0x54]
        call    dword ptr [edx + 0x8]
        mov     ecx, dword ptr [esi + 0x38]
        test    ecx, ecx
        jz      L_615c44
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_615c44:
        mov     ecx, dword ptr [esi + 0x24]
        test    ecx, ecx
        jz      L_615c51
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_615c51:
        mov     ecx, dword ptr [esi + 0x2c]
        test    ecx, ecx
        jz      L_615c5e
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_615c5e:
        mov     edi, dword ptr [esi + 0x10]
        test    edi, edi
        jz      L_615c81
        mov     ecx, edi
        call    FUN_00619b00
        mov     ecx, dword ptr [edi]
        push    1
        push    ecx
        mov     ecx, edi
        call    FUN_00619cf0
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_615c81:
        mov     edi, dword ptr [esi + 0x18]
        test    edi, edi
        jz      L_615ca4
        mov     ecx, edi
        call    FUN_00619c80
        mov     edx, dword ptr [edi]
        push    1
        push    edx
        mov     ecx, edi
        call    FUN_00619d10
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_615ca4:
        mov     ecx, dword ptr [esi + 0x1c]
        test    ecx, ecx
        jz      L_615cb1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_615cb1:
        mov     ecx, dword ptr [esi + 0x20]
        test    ecx, ecx
        jz      L_615cbe
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_615cbe:
        lea     edi, [esi + 0x74]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_615cdf
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_615cdf
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
L_615cdf:
        mov     ecx, edi
        call    FUN_0041fc90
        mov     eax, dword ptr [esi + 0x6c]
        test    eax, eax
        jz      L_615d00
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_615d00
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_615d00:
        lea     ecx, [esi + 0x54]
        call    FUN_004169c0
        lea     ecx, [esi + 0x40]
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
