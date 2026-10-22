// FUN_10045728 (0x10045728, 147 B, __cdecl)
extern unsigned long g_10076ba0;
extern unsigned long g_10076aa0[];
extern void __cdecl FUN_10043f78(unsigned long);
extern void __cdecl FUN_10043e8f(unsigned long);
extern void __cdecl FUN_10042786(void);
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10043fd7(unsigned long);
extern int *g_10049190;   // IAT: FlushFileBuffers
extern int *g_100490e4;   // IAT: GetLastError

__declspec(naked) void FUN_10045728(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, dword ptr [g_10076ba0]
        push esi
        push edi
        jnc loc_a9
        mov eax, ebx
        sar eax, 0x5
        lea edi, [eax*4 + g_10076aa0]
        mov eax, ebx
        and eax, 0x1f
        lea esi, [eax + eax*8]
        mov eax, dword ptr [edi]
        shl esi, 0x2
        test byte ptr [eax + esi*1 + 0x4], 0x1
        jz loc_a9
        push ebx
        call FUN_10043f78
        mov eax, dword ptr [edi]
        pop ecx
        test byte ptr [eax + esi*1 + 0x4], 0x1
        jz loc_90
        push ebx
        call FUN_10043e8f
        pop ecx
        push eax
        call dword ptr [g_10049190]
        test eax, eax
        jnz loc_83
        call dword ptr [g_100490e4]
        mov esi, eax
        jmp loc_85
loc_83:
        xor esi, esi
loc_85:
        test esi, esi
        jz loc_9e
        call FUN_10042786
        mov dword ptr [eax], esi
loc_90:
        call FUN_1004277d
        mov dword ptr [eax], 0x9
        or esi, 0xffffffff
loc_9e:
        push ebx
        call FUN_10043fd7
        pop ecx
        mov eax, esi
        jmp loc_b7
loc_a9:
        call FUN_1004277d
        mov dword ptr [eax], 0x9
        or eax, 0xffffffff
loc_b7:
        pop edi
        pop esi
        pop ebx
        ret
    }
}
