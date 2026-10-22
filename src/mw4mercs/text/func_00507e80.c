/*
 * FUN_00507E80 (81 B) — Constructor-like function
 * Sets up vtable, copies data, stores parameters
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00507e80(void)
{
    

extern int DAT_007b8c10;
extern void __cdecl FUN_00415180(void);
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push eax
        call FUN_00415180
        mov esi, [esp+0x10]
        xor edx, edx
        mov dword ptr [ebx], 0x0076CD9C
        lea edi, [ebx+0x10]
        mov ecx, 0x0C
        mov [ebx+0x08], edx
        mov [ebx+0x0C], edx
        rep movsd
        mov ecx, [esp+0x18]
        mov eax, [ecx]
        cmp eax, edx
        mov [ebx+0x44], eax
        jz skip_inc
        inc byte ptr [eax-1]
skip_inc:
        mov edx, [esp+0x14]
        pop edi
        pop esi
        mov dword ptr [ebx], 0x007771F0
        mov [ebx+0x40], edx
        mov eax, ebx
        pop ebx
        ret 0x0C
    }


}
