/*
 * FUN_005016B0 (71 B) — __thiscall method
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005016b0(void)
{
    

extern void __cdecl FUN_100416f57(void);
extern void __cdecl FUN_100415c89(void);
extern void __cdecl FUN_100415c80(void);
extern void __cdecl FUN_100416ef7(void);
extern void __cdecl FUN_100416eea(void);
__asm {
push ebx
        push ebp
        push esi
        push edi
        mov edi, [esp+0x14]
        lea ebp, [edi+0x10]
        mov esi, ecx
        push ebp
        call FUN_100416f57
        mov ebx, eax
        test ebx, ebx
        jz skip_init
        push ebx
        mov ecx, esi
        call FUN_100415c89
        push ebx
        lea ecx, [esi+0x18]
        call FUN_100415c80
skip_init:
        push ebp
        push edi
        mov ecx, esi
        call FUN_100416ef7
        lea eax, [edi+0x14]
        push eax
        push edi
        lea ecx, [esi+0x18]
        call FUN_100416eea
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x04
    }


}
