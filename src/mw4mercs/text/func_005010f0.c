/*
 * FUN_005010F0 (113 B) — Reference-counted object destructor/release
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dd160;              /* 0x007DD160 */
extern int DAT_007dd164;              /* 0x007DD164 */
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00416de0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);

__declspec(naked) void func_005010f0(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, [esi+0x10]
        test eax, eax
        jz skip_free
        mov cl, [eax-1]
        dec eax
        dec cl
        mov [eax], cl
        jnz skip_free
        push eax
        call FUN_004084e0
        add esp, 0x04
    skip_free:
        mov ecx, esi
        call FUN_00416de0
        test byte ptr [esp+0x08], 0x01
        jz done
        mov ecx, dword ptr [DAT_007dd160]
        push esi
        call FUN_00416130
        dec dword ptr [DAT_007dd164]
        jnz done
        push edi
        mov edi, dword ptr [DAT_007dd160]
        test edi, edi
        jz skip_del
        mov ecx, edi
        call FUN_00415e30
        push edi
        call FUN_004084e0
        add esp, 0x04
    skip_del:
        pop edi
        mov eax, esi
        mov dword ptr [DAT_007dd160], 0
        pop esi
        ret 0x04
    done:
        mov eax, esi
        pop esi
        ret 0x04
    }
}
