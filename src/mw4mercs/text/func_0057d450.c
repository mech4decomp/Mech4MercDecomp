/*
 * FUN_0057D450 (175 B) — Bytecode flag resolution and float store.
 *
 * Reads two values from a bytecode stream: a flag ID and an integer
 * value. Resolves the flag ID to a flag object, adds the integer
 * value to a float from a function call, and stores the result as
 * a double in the flag object.
 *
 * __cdecl (params on stack), returns undefined4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057D450(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db2a(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db02(void);
extern void __cdecl FUN_10056676a(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_006fab7e(void);
extern void __cdecl FUN_00707def(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db2a
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db02
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        push    esi
        mov     dword ptr [ebp - 4], ecx
        mov dword ptr [DAT_0080592c], eax
        call FUN_10056676a
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        add     esp, 4
        test    al, al
        jz      assert_done
        test    esi, esi
        jnz     assert_done
        push    0x78142c
        call FUN_006fab7e
        add     esp, 4
        test    eax, eax
        jz      assert_done
        int     3
assert_done:
        push    0
        call FUN_00707def
        fiadd   dword ptr [ebp - 4]
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], edx
        xor     eax, eax
        fstp    qword ptr [esi + 0x438]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
