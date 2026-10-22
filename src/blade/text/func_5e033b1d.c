/*
 * FUN_5e033b1d (428 B) - time-range check helper. Compares a timestamp
 * (param_1[7]) against the active timezone/range globals and returns a bool.
 * Calls FUN_5e033cc9 to build timezone strings.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e03a380;
extern int g_5e03a410;
extern int g_5e03a420;
extern int g_5e77ab10;
extern short g_5e77abbe;
extern short g_5e77abb0;
extern short g_5e77abbc;
extern short g_5e77abba;
extern short g_5e77abb8;
extern short g_5e77abb4;
extern short g_5e77abb6;
extern short g_5e77abb2;
extern short g_5e77ab6a;
extern short g_5e77ab5c;
extern short g_5e77ab68;
extern short g_5e77ab66;
extern short g_5e77ab64;
extern short g_5e77ab60;
extern short g_5e77ab62;
extern short g_5e77ab5e;
extern int g_5e03a414;
extern int g_5e03a424;
extern int g_5e03a418;
extern int g_5e03a428;

extern void __cdecl FUN_5e033cc9(void);

__declspec(naked) void FUN_5e033b1d(void)
{
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [g_5e03a380], edi
        jnz Lb31
    Lb2a:
        xor eax, eax
        jmp Lc7d
    Lb31:
        mov esi, dword ptr [esp+0x10]
        push 1
        pop ebx
        mov eax, dword ptr [esi+0x14]
        cmp eax, dword ptr [g_5e03a410]
        jnz Lb4f
        cmp eax, dword ptr [g_5e03a420]
        jz Lc51
    Lb4f:
        cmp dword ptr [g_5e77ab10], edi
        jz Lc27
        movzx ecx, word ptr [g_5e77abbe]
        push ecx
        cmp word ptr [g_5e77abb0], di
        movzx ecx, word ptr [g_5e77abbc]
        push ecx
        movzx ecx, word ptr [g_5e77abba]
        push ecx
        movzx ecx, word ptr [g_5e77abb8]
        push ecx
        jnz Lba1
        movzx ecx, word ptr [g_5e77abb4]
        push edi
        push ecx
        movzx ecx, word ptr [g_5e77abb6]
        push ecx
        movzx ecx, word ptr [g_5e77abb2]
        push ecx
        push eax
        push ebx
        jmp Lbb5
    Lba1:
        movzx ecx, word ptr [g_5e77abb6]
        push ecx
        push edi
        movzx ecx, word ptr [g_5e77abb2]
        push edi
        push ecx
        push eax
        push edi
    Lbb5:
        push ebx
        call FUN_5e033cc9
        movzx eax, word ptr [g_5e77ab6a]
        add esp, 0x2c
        cmp word ptr [g_5e77ab5c], di
        push eax
        movzx eax, word ptr [g_5e77ab68]
        push eax
        movzx eax, word ptr [g_5e77ab66]
        push eax
        movzx eax, word ptr [g_5e77ab64]
        push eax
        jnz Lc0f
        movzx eax, word ptr [g_5e77ab60]
        push edi
        push eax
        movzx eax, word ptr [g_5e77ab62]
        push eax
        movzx eax, word ptr [g_5e77ab5e]
        push eax
        push dword ptr [esi+0x14]
        push ebx
    Lc04:
        push edi
        call FUN_5e033cc9
        add esp, 0x2c
        jmp Lc51
    Lc0f:
        movzx eax, word ptr [g_5e77ab62]
        push eax
        push edi
        movzx eax, word ptr [g_5e77ab5e]
        push edi
        push eax
        push dword ptr [esi+0x14]
        push edi
        jmp Lc04
    Lc27:
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push ebx
        push 4
        push eax
        push ebx
        push ebx
        call FUN_5e033cc9
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push 5
        push 0xa
        push dword ptr [esi+0x14]
        push ebx
        push edi
        call FUN_5e033cc9
        add esp, 0x58
    Lc51:
        mov edx, dword ptr [g_5e03a414]
        mov eax, dword ptr [g_5e03a424]
        mov ecx, dword ptr [esi+0x1c]
        cmp edx, eax
        jge Lc81
        cmp ecx, edx
        jl Lb2a
        cmp ecx, eax
        jg Lb2a
        cmp ecx, edx
        jle Lc95
        cmp ecx, eax
        jge Lc95
    Lc7b:
        mov eax, ebx
    Lc7d:
        pop edi
        pop esi
        pop ebx
        ret
    Lc81:
        cmp ecx, eax
        jl Lc7b
        cmp ecx, edx
        jg Lc7b
        cmp ecx, eax
        jle Lc95
        cmp ecx, edx
        jl Lb2a
    Lc95:
        mov eax, dword ptr [esi+0x8]
        imul eax, eax, 0x3c
        add eax, dword ptr [esi+0x4]
        imul eax, eax, 0x3c
        add eax, dword ptr [esi]
        imul eax, eax, 0x3e8
        cmp ecx, edx
        jnz Lcbc
        xor ecx, ecx
        cmp eax, dword ptr [g_5e03a418]
        setge cl
    Lcb8:
        mov eax, ecx
        jmp Lc7d
    Lcbc:
        xor ecx, ecx
        cmp eax, dword ptr [g_5e03a428]
        setl cl
        jmp Lcb8
    }
}
