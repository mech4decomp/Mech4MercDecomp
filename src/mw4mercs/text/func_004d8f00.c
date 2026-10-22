/*
 * FUN_004d8f00 (90 B) — __thiscall (RET 0x8, 2 stack args). Iterates a
 * renderer list: FUN_00416bc0(this+0x10), then repeatedly FUN_00416cc0()
 * and calls FUN_004f3340(param_1,param_2), finally FUN_00416c60().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004f3340(void);   /* __thiscall; ecx set manually */
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_004d8f00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x18
        push    esi
        add     ecx, 0x10
        push    edi
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_00416bc0
        lea     ecx, [esp+0xc]
        mov     dword ptr [esp+0xc], 0x7730ec
        call    FUN_00416cc0
        test    eax, eax
        jz      done
        mov     esi, dword ptr [ebp+0xc]   /* param_2 */
        mov     edi, dword ptr [ebp+0x8]   /* param_1 */
loop_body:
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_004f3340
        lea     ecx, [esp+0xc]
        call    FUN_00416cc0
        test    eax, eax
        jnz     loop_body
done:
        lea     ecx, [esp+0xc]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
