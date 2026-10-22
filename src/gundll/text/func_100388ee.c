// FUN_100388ee (0x100388EE, 153 B, __stdcall)
extern unsigned long g_10076ba8;
extern unsigned long g_10076bb4;
extern unsigned long g_100754e4;
extern unsigned long g_100754cc;
extern unsigned long g_100754c8;
extern char g_100754f8;
extern void __cdecl FUN_1003ca53(void);
extern void __cdecl FUN_10038987(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
extern void __cdecl FUN_1003c3c5(unsigned long);
extern void __cdecl FUN_100374e6(unsigned long);
extern int *g_100491b8;   // IAT

__declspec(naked) void FUN_100388ee(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        xor ebx, ebx
        cmp dword ptr [g_10076ba8], ebx
        push esi
        push edi
        jnz loc_05
        call FUN_1003ca53
loc_05:
        mov esi, offset g_100754f8
        push 0x104
        push esi
        push ebx
        call dword ptr [g_100491b8]
        mov eax, dword ptr [g_10076bb4]
        mov dword ptr [g_100754e4], esi
        mov edi, esi
        cmp byte ptr [eax], bl
        jz loc_2a
        mov edi, eax
loc_2a:
        lea eax, [ebp - 0x8]
        push eax
        lea eax, [ebp - 0x4]
        push eax
        push ebx
        push ebx
        push edi
        call FUN_10038987
        mov eax, dword ptr [ebp - 0x8]
        mov ecx, dword ptr [ebp - 0x4]
        lea eax, [eax + ecx*4]
        push eax
        call FUN_1003c3c5
        mov esi, eax
        add esp, 0x18
        cmp esi, ebx
        jnz loc_5a
        push 0x8
        call FUN_100374e6
        pop ecx
loc_5a:
        lea eax, [ebp - 0x8]
        push eax
        lea eax, [ebp - 0x4]
        push eax
        mov eax, dword ptr [ebp - 0x4]
        lea eax, [esi + eax*4]
        push eax
        push esi
        push edi
        call FUN_10038987
        mov eax, dword ptr [ebp - 0x4]
        add esp, 0x14
        dec eax
        mov dword ptr [g_100754cc], esi
        pop edi
        pop esi
        mov dword ptr [g_100754c8], eax
        pop ebx
        leave
        ret
    }
}
