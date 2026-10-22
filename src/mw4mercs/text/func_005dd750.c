/*
 * FUN_005dd750 (78 B) — __thiscall, RET 4 (one stack param).
 *
 * Calls FUN_0041fcb0(this+0x1c8). If param != 0 and its [param+0x10]
 * bit 0x13 is clear and param != [this+0x170], calls
 * FUN_00415230(DAT_007f20d8); if that returns != 1, calls
 * FUN_0041fcd0(param).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void __cdecl func_005dd750(void)
{
    

extern int DAT_007f20d8;
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x1c8]
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        jz      L798
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L798
        cmp     esi, dword ptr [edi + 0x170]
        jz      L798
        mov eax, dword ptr [DAT_007f20d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jz      L798
        push    esi
        mov     ecx, ebx
        call    FUN_0041fcd0
L798:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }


}
