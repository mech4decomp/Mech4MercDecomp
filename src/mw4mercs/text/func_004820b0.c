/*
 * FUN_004820b0 (147 B) — __thiscall MLR light constructor.
 * Calls FUN_0048fdd0, sets vtable 0x76fa18 and flags 0x120, loads
 * "InnerRadius"/"OuterRadius" values (FUN_00411d60), asserts Inner <
 * Outer (FUN_006fab90 + int3), then calls FUN_004821f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048fdd0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004821f0(void);

__declspec(naked) void FUN_004820b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+8]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_0048fdd0
        push    0x0
        lea     ecx, [ebp+8]
        push    ecx
        push    0x76fa80
        mov     ecx, edi
        mov     dword ptr [esi], 0x76fa18
        mov     dword ptr [esi+0x78], 0x120
        mov     dword ptr [ebp+8], 0
        call    FUN_00411d60
        push    0x0
        lea     edx, [ebp+0xc]
        push    edx
        push    0x76fa74
        mov     ecx, edi
        mov     dword ptr [ebp+0xc], 0x42c80000
        call    FUN_00411d60
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [ebp+8]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_48212c
        mov     eax, dword ptr [edi+0x14]
        mov     ecx, dword ptr [edi+0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        push    0x76fa38
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_48212c
        int     3
L_48212c:
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004821f0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     8
    }
}
