/*
 * FUN_004098f0 (933 B) — __fastcall engine/config init. Builds a 50-entry
 * shuffled index table, constructs/destroys a pair of container objects
 * (at +0x10 and +0x24), and iterates several collection types.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004095d0(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_00416530(void);
extern void __cdecl FUN_004165e0(void);
extern void __cdecl FUN_004166f0(void);
extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_00416610(void);
extern void __cdecl FUN_00416670(void);
extern void __cdecl FUN_004167a0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416730(void);

__declspec(naked) void FUN_004098f0(void)
{
    __asm {
        sub     esp, 0xfc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebp, ebp
        xor     eax, eax
        lea     ecx, [esp+0x44]
L_9904:
        mov     dword ptr [ecx], eax
        inc     eax
        add     ecx, 4
        cmp     eax, 0x32
        jl      L_9904
        xor     ecx, ecx
        mov     dword ptr [esp+0x10], ecx
L_9915:
        mov     eax, 0x32
        sub     eax, ecx
        push    eax
        call    FUN_00415040
        mov     ecx, dword ptr [esp+0x14]
        mov     esi, dword ptr [esp+ecx*4+0x48]
        add     eax, ecx
        mov     edx, dword ptr [esp+eax*4+0x48]
        lea     eax, [esp+eax*4+0x48]
        add     esp, 4
        mov     dword ptr [eax], esi
        mov     dword ptr [esp+ecx*4+0x44], edx
        inc     ecx
        cmp     ecx, 0x32
        mov     dword ptr [esp+0x10], ecx
        jl      L_9915
        lea     esi, [edi+0x10]
        mov     dword ptr [esp+0x10], ebp
        add     edi, 0x24
L_9951:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_9973
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+ecx*4+0x44]
        push    edx
        mov     ecx, eax
        call    FUN_004095d0
        mov     ebx, eax
        jmp     L_9975
L_9973:
        xor     ebx, ebx
L_9975:
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [esp+eax*4+0x44]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00416470
        mov     edx, dword ptr [esp+0x10]
        lea     eax, [esp+edx*4+0x44]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416470
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_9951
        mov     dword ptr [esp+0x10], ebp
L_99A9:
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_004164b0
        lea     edx, [esp+0x10]
        push    edx
        mov     ecx, edi
        call    FUN_004164b0
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_99A9
        push    esi
        lea     ecx, [esp+0x30]
        call    FUN_00416530
        mov     ebp, 0x76ce2c
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x30], ebp
        call    FUN_00416530
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x14], ebp
        call    FUN_004165e0
        lea     ecx, [esp+0x14]
        call    FUN_004165e0
        lea     ecx, [esp+0x2c]
        call    FUN_004166f0
        lea     ecx, [esp+0x14]
        call    FUN_004166f0
        lea     ecx, [esp+0x14]
        call    FUN_004165b0
        lea     ecx, [esp+0x2c]
        call    FUN_004165b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416530
        push    edi
        lea     ecx, [esp+0x30]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416530
        xor     ebx, ebx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x2c], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_004166f0
        test    eax, eax
        jz      L_9A86
L_9A55:
        lea     ecx, [esp+0x2c]
        call    FUN_004166f0
        lea     ecx, [esp+0x14]
        call    FUN_00416610
        lea     ecx, [esp+0x2c]
        call    FUN_00416610
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_004166f0
        test    eax, eax
        jnz     L_9A55
L_9A86:
        lea     ecx, [esp+0x2c]
        call    FUN_004165b0
        lea     ecx, [esp+0x14]
        call    FUN_004165b0
        push    esi
        lea     ecx, [esp+0x30]
        call    FUN_00416530
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x30], ebp
        call    FUN_00416530
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00416670
        test    eax, eax
        jz      L_9AE4
L_9AC5:
        lea     ecx, [esp+0x14]
        call    FUN_00416670
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00416670
        test    eax, eax
        jnz     L_9AC5
L_9AE4:
        lea     ecx, [esp+0x14]
        call    FUN_004165b0
        lea     ecx, [esp+0x2c]
        call    FUN_004165b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416530
        push    edi
        lea     ecx, [esp+0x30]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416530
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x2c], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_004166f0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_9B56
L_9B25:
        lea     ecx, [esp+0x2c]
        call    FUN_004166f0
        lea     ecx, [esp+0x14]
        call    FUN_004167a0
        test    ebx, ebx
        jz      L_9B43
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax]
L_9B43:
        inc     dword ptr [esp+0x10]
        lea     ecx, [esp+0x14]
        call    FUN_004166f0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_9B25
L_9B56:
        lea     ecx, [esp+0x2c]
        call    FUN_004165b0
        lea     ecx, [esp+0x14]
        call    FUN_004165b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416530
        push    edi
        lea     ecx, [esp+0x30]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416530
        mov     dword ptr [esp+0x2c], ebp
        mov     dword ptr [esp+0x10], 0
L_9B8C:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_9BAE
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+ecx*4+0x44]
        push    edx
        mov     ecx, eax
        call    FUN_004095d0
        mov     ebx, eax
        jmp     L_9BB0
L_9BAE:
        xor     ebx, ebx
L_9BB0:
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [esp+eax*4+0x44]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00416470
        mov     edx, dword ptr [esp+0x10]
        lea     eax, [esp+edx*4+0x44]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416470
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_9B8C
        lea     ecx, [esp+0x2c]
        call    FUN_004165b0
        lea     ecx, [esp+0x14]
        call    FUN_004165b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416530
        push    edi
        lea     ecx, [esp+0x30]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416530
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x2c], ebp
        mov     dword ptr [esp+0x10], 0
        call    FUN_004165e0
        lea     ecx, [esp+0x14]
        call    FUN_00415cc0
        test    eax, eax
        jz      L_9C76
L_9C2C:
        push    eax
        call    FUN_00415040
        add     esp, 4
        mov     esi, eax
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416730
        lea     ecx, [esp+0x14]
        call    FUN_004167a0
        push    esi
        lea     ecx, [esp+0x30]
        call    FUN_00416730
        test    eax, eax
        jz      L_9C60
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
L_9C60:
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00415cc0
        test    eax, eax
        jnz     L_9C2C
L_9C76:
        lea     ecx, [esp+0x2c]
        call    FUN_004165b0
        lea     ecx, [esp+0x14]
        call    FUN_004165b0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xfc
        ret
    }
}
