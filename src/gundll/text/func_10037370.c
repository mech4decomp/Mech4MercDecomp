// FUN_10037370 (0x10037370) - __stdcall, RET 0xc
extern int (__stdcall *g_iat_100490c4)(void);
extern int (__stdcall *g_iat_100490c0)(void);
extern unsigned int g_100754b8;
extern unsigned char g_100754b9;
extern unsigned int g_100754c0;
extern unsigned int g_100754c4;
extern unsigned int g_100754bc;
extern unsigned int g_10076bb4;
extern unsigned int g_1007549c;
extern unsigned int g_10075498;
extern unsigned int g_100754f0;
extern void __cdecl FUN_10038de2(void);
extern void __cdecl FUN_1003848d(void);
extern void __cdecl FUN_10038e3f(void);
extern void __cdecl FUN_10038b3b(void);
extern void __cdecl FUN_10038625(void);
extern void __cdecl FUN_100388ee(void);
extern void __cdecl FUN_10038835(void);
extern void __cdecl FUN_1003834f(void);
extern void __cdecl FUN_1003839e(void);
extern void __cdecl FUN_100387e1(void);
extern void __cdecl FUN_100384e1(void);
extern void __cdecl FUN_10038579(void);

__declspec(naked) void FUN_10037370(void)
{
    __asm {
        mov eax, dword ptr [esp+0x8]
        cmp eax, 0x1
        jnz loc_10037405
        call dword ptr [g_iat_100490c4]
        push 0x1
        mov [g_100754b8], eax
        call FUN_10038de2
        test eax, eax
        pop ecx
        jz loc_100373d0
        mov eax, [g_100754b8]
        xor ecx, ecx
        mov cl, byte ptr [g_100754b9]
        and eax, 0xff
        shr dword ptr [g_100754b8], 0x10
        mov [g_100754c0], eax
        mov dword ptr [g_100754c4], ecx
        shl eax, 0x8
        add eax, ecx
        mov [g_100754bc], eax
        call FUN_1003848d
        test eax, eax
        jnz loc_100373d4
        call FUN_10038e3f
loc_100373d0:
        xor eax, eax
        jmp loc_10037446
loc_100373d4:
        call dword ptr [g_iat_100490c0]
        mov [g_10076bb4], eax
        call FUN_10038b3b
        mov [g_1007549c], eax
        call FUN_10038625
        call FUN_100388ee
        call FUN_10038835
        call FUN_1003834f
        inc dword ptr [g_10075498]
        jmp loc_10037443
loc_10037405:
        xor ecx, ecx
        cmp eax, ecx
        jnz loc_10037437
        cmp dword ptr [g_10075498], ecx
        jle loc_100373d0
        dec dword ptr [g_10075498]
        cmp dword ptr [g_100754f0], ecx
        jnz loc_10037426
        call FUN_1003839e
loc_10037426:
        call FUN_100387e1
        call FUN_100384e1
        call FUN_10038e3f
        jmp loc_10037443
loc_10037437:
        cmp eax, 0x3
        jnz loc_10037443
        push ecx
        call FUN_10038579
        pop ecx
loc_10037443:
        push 0x1
        pop eax
loc_10037446:
        ret 0xc
    }
}
