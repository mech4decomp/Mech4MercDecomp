/*
 * FUN_005013F0 (85 B) — Constructor function
 * Sets up vtable pointers and stores parameters
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005013f0(void)
{
    

extern int DAT_007b8c10;
extern void __cdecl FUN_10041517b(void);
extern void __cdecl FUN_10041254e(void);
extern void __cdecl FUN_1004128b1(void);
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push esi
        push edi
        mov esi, ecx
        push eax
        call FUN_10041517b
        mov ecx, [esp+0x10]
        xor eax, eax
        lea edi, [esi+0x14]
        push ecx
        mov ecx, edi
        mov [esi+0x08], eax
        mov [esi+0x0C], eax
        mov dword ptr [esi], 0x0076CD9C
        call FUN_10041254e
        mov ecx, edi
        mov dword ptr [esi], 0x0077635C
        call FUN_1004128b1
        mov eax, [esp+0x14]
        mov edx, [esp+0x0C]
        mov ecx, [esp+0x18]
        mov [esi+0x18], eax
        pop edi
        mov [esi+0x10], edx
        mov [esi+0x1C], ecx
        mov eax, esi
        pop esi
        ret 0x10
    }


}
