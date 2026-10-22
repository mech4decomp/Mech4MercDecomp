/*
 * FUN_006055f0 (161 B) — __thiscall (ECX = this). Loads a global at
 * 0x7f27ac into ECX, then branches on FUN_0041fd80() result to build
 * an object via FUN_00416110/FUN_00605410 and various FUN_0041fcd0/
 * FUN_004179b0/FUN_0041fcb0 helpers. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f27ac;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00605410(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void __fastcall FUN_006055f0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x18]
        push    edi
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        mov     ecx, dword ptr [g_7f27ac]
        jnz     L_3c
        call    FUN_00416110
        test    eax, eax
        jz      L_2d
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_00605410
        mov     edi, eax
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        add     esi, 0x20
        jmp     L_7c
L_2d:
        xor     edi, edi
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        add     esi, 0x20
        jmp     L_7c
L_3c:
        call    FUN_00416110
        test    eax, eax
        jz      L_55
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     ecx, eax
        call    FUN_00605410
        mov     edi, eax
        jmp     L_57
L_55:
        xor     edi, edi
L_57:
        add     esi, 0x20
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ebx, eax
        push    edi
        lea     ecx, [ebx + 0x1c]
        call    FUN_004179b0
        push    ebx
        lea     ecx, [edi + 0x14]
        call    FUN_0041fcd0
        mov     ecx, esi
        call    FUN_0041fcb0
L_7c:
        push    edi
        mov     ecx, esi
        call    FUN_0041fcd0
        mov     ecx, esi
        call    FUN_0041fd80
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
