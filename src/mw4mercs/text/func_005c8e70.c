/*
 * FUN_005c8e70 (126 B) — __thiscall (ECX = this), returns float in ST0.
 *
 * Converts this->[0x1bc] via _ftol and dispatches through a jump table to
 * one of five "fire mode" handlers (0xa..0xe), each calling FUN_00637b40 +
 * FUN_00637a20. Default returns a constant.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075db4a(void);
extern void *__stdcall FUN_00637b40(int a);
extern float FUN_00637a20(void);

__declspec(naked) void __stdcall FUN_005c8e70(void)
{
    

extern int DAT_0076d064;
__asm {
fld     dword ptr [ecx + 0x1bc]
        call    FUN_0075db4a
        dec     eax
        cmp     eax, 0x9
        ja      L_8ee7
        jmp     dword ptr [eax*4 + 0x5c8ef0]
    L_8e88:
        mov     eax, 0xa
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        ret
    L_8e9b:
        mov     eax, 0xb
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        ret
    L_8eae:
        mov     eax, 0xc
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        ret
    L_8ec1:
        mov     eax, 0xd
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        ret
    L_8ed4:
        mov     eax, 0xe
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        ret
    L_8ee7:
        fld dword ptr [DAT_0076d064]
        ret
    }


}
