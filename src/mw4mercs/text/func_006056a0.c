/*
 * FUN_006056a0 (89 B) — __thiscall. Constructs sub-objects at this+0x20
 * and this+0x20+0x14 via FUN_0041fd80, wires them with FUN_0041fcb0 /
 * FUN_0041fcd0, then calls a virtual method (slot 0) on the first
 * sub-object with arg 1. On allocation failure, asserts via
 * FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_0041fd80(void);
extern void __fastcall FUN_0041fcb0(void);
extern void __fastcall FUN_0041fcd0(void *a);
extern int __cdecl FUN_006fab90(void *msg);

__declspec(naked) void __fastcall FUN_006056a0(void *param_1)
{
    __asm {
        push    ebx
        push    esi
        lea     esi, [ecx + 0x20]
        push    edi
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edi, eax
        lea     ebx, [edi + 0x14]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_e3
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
        test    edi, edi
        jz      L_f5
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
        pop     edi
        pop     esi
        pop     ebx
        ret
L_e3:
        push    0x78B9C8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_f5
        int     3
L_f5:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
