// FUN_10043ed1 (0x10043ED1) __cdecl, 167 bytes
extern void __cdecl FUN_1004270a(void);
extern void __cdecl FUN_10043c71(void);
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);
extern void __cdecl FUN_10043d94(void);
extern void __cdecl FUN_10043fd7(void);
extern void *g_100490f4;   // IAT slot 0x100490f4 (GetFileType)
extern void *g_100490e4;   // IAT slot 0x100490e4 (GetLastError)
extern unsigned char g_10076aa0;

__declspec(naked) void func_10043ed1(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        xor bl, bl
        test byte ptr [ebp + 0xc], 0x8
        push esi
        jz LEE1
        add bl, 0x20
    LEE1:
        test byte ptr [ebp + 0xd], 0x40
        jz LEEA
        or bl, 0x80
    LEEA:
        test byte ptr [ebp + 0xc], 0x80
        jz LEF3
        or bl, 0x10
    LEF3:
        push dword ptr [ebp + 0x8]
        call dword ptr [g_100490f4]
        test eax, eax
        jnz LF0F
        call dword ptr [g_100490e4]
        push eax
        call FUN_1004270a
        pop ecx
        jmp LF40
    LF0F:
        cmp eax, 0x2
        jnz LF19
        or bl, 0x40
        jmp LF21
    LF19:
        cmp eax, 0x3
        jnz LF21
        or bl, 0x8
    LF21:
        call FUN_10043c71
        mov esi, eax
        cmp esi, -0x1
        jnz LF45
        call FUN_1004277d
        mov dword ptr [eax], 0x18
        call FUN_10042786
        and dword ptr [eax], 0x0
    LF40:
        or eax, 0xffffffff
        jmp LF74
    LF45:
        push dword ptr [ebp + 0x8]
        push esi
        call FUN_10043d94
        mov ecx, esi
        mov eax, esi
        sar ecx, 0x5
        and eax, 0x1f
        or bl, 0x1
        mov ecx, dword ptr [ecx*4 + g_10076aa0]
        push esi
        lea eax, [eax + eax*8]
        mov byte ptr [ecx + eax*4 + 0x4], bl
        call FUN_10043fd7
        add esp, 0xc
        mov eax, esi
    LF74:
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
