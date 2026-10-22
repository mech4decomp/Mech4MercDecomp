/*
 * FUN_0061f5d0 (98 B) — __stdcall (RET 0xc), 3 params.
 *
 * Validates param_1; if null returns 1. Loads iVar1 = *(param_1+0x14).
 * If param_2 != 0: ensure iVar1 (call FUN_0061f410 if null, return 2 on
 * failure), set [iVar1+6]=1, [iVar1+7]=param_3, return 0.
 * Else if iVar1 != 0: if [iVar1+4]!=0 set [iVar1+6]=[iVar1+7]=0, return 0;
 * else call FUN_0061f490(param_1). Return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061f410(void *ptr);
extern void __cdecl FUN_0061f490(void *ptr);

__declspec(naked) void FUN_0061f5d0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jnz     L_5e0
        mov     eax, 0x1
        ret     0xc
    L_5e0:
        cmp     byte ptr [esp + 0x8], 0x0
        mov     eax, dword ptr [edx + 0x14]
        jz      L_610
        test    eax, eax
        jnz     L_600
        push    edx
        call    FUN_0061f410
        test    eax, eax
        jnz     L_600
        mov     eax, 0x2
        ret     0xc
    L_600:
        mov     cl, byte ptr [esp + 0xc]
        mov     byte ptr [eax + 0x6], 0x1
        mov     byte ptr [eax + 0x7], cl
        xor     eax, eax
        ret     0xc
    L_610:
        test    eax, eax
        jz      L_62d
        cmp     byte ptr [eax + 0x4], 0x0
        jz      L_627
        mov     byte ptr [eax + 0x6], 0x0
        mov     byte ptr [eax + 0x7], 0x0
        xor     eax, eax
        ret     0xc
    L_627:
        push    edx
        call    FUN_0061f490
    L_62d:
        xor     eax, eax
        ret     0xc
    }
}
