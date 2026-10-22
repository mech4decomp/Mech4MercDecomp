/* FUN_006bbc00 - gosScript anim/script holder add (RET 0xc) */

extern unsigned char g_82e238;      /* 0x0082e238 */
extern int g_859b90;                /* 0x00859b90 */
extern int g_82eaf4;                /* 0x0082eaf4 */
extern int g_82e234;                /* 0x0082e234 */
extern int g_82f3c0;                /* 0x0082f3c0 */
extern int g_82e23c;                /* 0x0082e23c */
extern int g_82e218;                /* 0x0082e218 */
extern void (*g_858a40)(void);      /* 0x00858a40 */
extern int g_849310;                /* 0x00849310 */
extern int g_849330;                /* 0x00849330 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006ce300(void);
extern void __cdecl FUN_006ce480(void);
extern void __cdecl FUN_006cbfe0(void);
extern void __cdecl FUN_006ce3b0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00709c60(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0070c960(void);

void __declspec(naked) func_006bbc00(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov al, byte ptr [g_82e238]
        test al, al
        jnz L1
        push 0x79b618
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L1
        int 3
L1:
        push ebx
        push esi
        push edi
        call FUN_006ce300
        mov esi, dword ptr [ebp+0xc]
        cmp esi, 0x2000
        jl L2
        cmp esi, 0x4000
        jge L2
        inc dword ptr [g_859b90]
L2:
        mov eax, dword ptr [ebp+0x10]
        mov ecx, dword ptr [ebp+0x8]
        push eax
        push esi
        push ecx
        call FUN_006ce480
        mov edi, eax
        mov edx, dword ptr [edi+0x8]
        push 0x15
        push edx
        mov dword ptr [ebp+0x10], edi
        call FUN_006cbfe0
        call FUN_006ce3b0
        cmp dword ptr [g_859b90], 0x1
        jnz L3
        cmp esi, 0x2000
        jl L3
        cmp esi, 0x4000
        jge L3
        mov eax, dword ptr [g_82eaf4]
        mov ebx, dword ptr [g_82e234]
        mov esi, dword ptr [g_82f3c0]
        push 0x0
        lea ecx, [eax*4]
        sub ebx, esi
        push ecx
        sar ebx, 0x2
        call FUN_006f3c80
        mov edx, dword ptr [g_82eaf4]
        mov esi, dword ptr [g_82f3c0]
        mov ecx, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr [g_82e23c]
        mov dword ptr [ebp+0xc], eax
        mov esi, edx
L4:
        mov edx, dword ptr [g_82e218]
        push edx
        call FUN_00709c60
        mov ecx, dword ptr [g_859b90]
        and eax, 0xff
        test ecx, ecx
        jz L5
        test eax, eax
        jz L4
        jmp L9
L5:
        test eax, eax
        jz L6
L9:
        mov eax, dword ptr [g_858a40]
        test eax, eax
        jz L7
        mov eax, dword ptr [g_849310]
        mov esi, dword ptr [g_849330]
        push eax
        call FUN_006f4950
        call dword ptr [g_858a40]
        call FUN_006f49a0
        mov eax, dword ptr [g_849330]
        cmp esi, eax
        jbe L8
        push 0x79b5e0
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L7
        int 3
        jmp L7
L8:
        jnc L7
        push 0x79b5a8
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L7
        int 3
L7:
        mov ecx, dword ptr [ebp+0xc]
        push ecx
        call FUN_006f4230
        call FUN_0070c960
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ebp
        ret 0xc
L6:
        mov edx, dword ptr [g_82f3c0]
        push edx
        call FUN_006f4230
        mov eax, dword ptr [ebp+0xc]
        mov dword ptr [g_82f3c0], eax
        lea eax, [eax+ebx*4]
        mov dword ptr [g_82e23c], edi
        mov edi, dword ptr [ebp+0x10]
        mov dword ptr [g_82e234], eax
        mov dword ptr [g_82eaf4], esi
L3:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
    }
}
