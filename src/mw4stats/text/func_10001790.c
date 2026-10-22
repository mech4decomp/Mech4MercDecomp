/*
 * MW4Stats.dll - MW4StatsDll_writeTeamStats (0x10001790, 627 B, __stdcall)
 * Writes team stats; SEH prologue/epilogue, FPU math, _ftol conversions.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100058c0(void);
extern void __cdecl FUN_10001a10(void);
extern void __cdecl FUN_10003250(void);
extern void __cdecl FUN_10001a60(void);
extern void __cdecl FUN_10005d50(void);
extern void __cdecl FUN_10001370(void);
extern long __cdecl FUN_1001ee10(void); /* _ftol */

extern double g_100211e0;
extern float  g_100211dc;
extern float  g_100211d8;
extern double g_100211d0;

__declspec(naked) void MW4StatsDll_writeTeamStats(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff8
        push -0x1
        push 0x1001f1db
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4bc
        push ebx
        push esi
        push edi
        lea ecx, [esp+0x14]
        call FUN_100058c0
        mov eax, dword ptr [ebp+0x8]
        lea esi, [eax+0x1]
        xor ebx, ebx
        push esi
        lea ecx, [esp+0x28]
        mov dword ptr [esp+0x4d4], ebx
        call FUN_10001a10
        push 0x2
        lea ecx, [esp+0xcc]
        call FUN_10003250
        push esi
        lea ecx, [esp+0x350]
        call FUN_10001a10
        fld qword ptr [ebp+0x14]
        mov ecx, dword ptr [ebp+0xc]
        mov edx, dword ptr [ebp+0x10]
        mov dword ptr [esp+0x308], ecx
        mov dword ptr [esp+0x30c], edx
        call FUN_1001ee10
        fld qword ptr [ebp+0x1c]
        mov dword ptr [esp+0x2e4], eax
        call FUN_1001ee10
        fld qword ptr [ebp+0x24]
        mov dword ptr [esp+0x2f0], eax
        call FUN_1001ee10
        fld qword ptr [ebp+0x1c]
        fadd qword ptr [ebp+0x24]
        mov dword ptr [esp+0x2f4], eax
        fcom qword ptr [g_100211e0]
        fnstsw ax
        test ah, 0x40
        jnz L1
        fld qword ptr [ebp+0x14]
        fdiv st(0), st(1)
        fstp qword ptr [esp+0x2e8]
    L1:
        mov eax, dword ptr [ebp+0x2c]
        fstp st(0)
        mov ecx, dword ptr [ebp+0x34]
        mov dword ptr [esp+0x2d0], eax
        mov eax, dword ptr [ebp+0x30]
        mov dword ptr [esp+0x2dc], eax
        add eax, ecx
        cmp eax, ebx
        mov dword ptr [esp+0x2e0], ecx
        mov dword ptr [esp+0x10], eax
        jz L2
        fild dword ptr [ebp+0x2c]
        fidiv dword ptr [esp+0x10]
        fstp qword ptr [esp+0x2d4]
    L2:
        mov eax, dword ptr [ebp+0x40]
        mov esi, dword ptr [ebp+0x3c]
        mov ecx, dword ptr [ebp+0x38]
        mov edi, dword ptr [ebp+0x44]
        mov edx, dword ptr [ebp+0x4c]
        mov dword ptr [esp+0x300], eax
        add eax, esi
        mov dword ptr [esp+0x310], ecx
        mov ecx, dword ptr [ebp+0x48]
        add eax, edi
        mov dword ptr [esp+0x4bc], edx
        mov edx, dword ptr [ebp+0x50]
        add eax, ecx
        mov dword ptr [esp+0x2f8], esi
        mov dword ptr [esp+0x348], edi
        mov dword ptr [esp+0x3e8], ecx
        mov dword ptr [esp+0x3e4], edx
        mov dword ptr [esp+0x10], eax
        jz L3
        fild dword ptr [ebp+0x40]
        fmul dword ptr [g_100211dc]
        fidiv dword ptr [esp+0x10]
        call FUN_1001ee10
        mov dword ptr [esp+0x2fc], eax
        jmp L4
    L3:
        mov dword ptr [esp+0x2fc], ebx
    L4:
        fld qword ptr [ebp+0xc]
        fcomp qword ptr [g_100211e0]
        fnstsw ax
        test ah, 0x40
        jnz L5
        fild dword ptr [ebp+0x38]
        fmul dword ptr [g_100211d8]
        fdiv qword ptr [ebp+0xc]
        call FUN_1001ee10
        mov dword ptr [esp+0x314], eax
        jmp L6
    L5:
        mov dword ptr [esp+0x314], ebx
    L6:
        lea esi, [esi+edi*1+0x1]
        cmp esi, ebx
        mov dword ptr [esp+0x10], esi
        jz L7
        fld qword ptr [ebp+0xc]
        fmul qword ptr [g_100211d0]
        fidiv dword ptr [esp+0x10]
        call FUN_1001ee10
        mov dword ptr [esp+0x41c], eax
        jmp L8
    L7:
        mov dword ptr [esp+0x41c], ebx
    L8:
        mov edi, dword ptr [ebp+0x54]
        cmp edi, ebx
        jz L9
        mov ebx, dword ptr [ebp+0x58]
        xor esi, esi
        test ebx, ebx
        mov dword ptr [esp+0x10], esi
        jle L10
    L11:
        fld dword ptr [edi]
        sub esp, 0x8
        fstp qword ptr [esp]
        sub esp, 0x8
        fild dword ptr [esp+0x20]
        lea ecx, [esp+0x3fc]
        fstp qword ptr [esp]
        call FUN_10001a60
        inc esi
        add edi, 0x4
        cmp esi, ebx
        mov dword ptr [esp+0x10], esi
        jl L11
    L10:
        xor ebx, ebx
    L9:
        cmp dword ptr [ebp+0x5c], ebx
        jz L12
        mov dword ptr [esp+0x4b8], 0x1
        mov dword ptr [esp+0x304], ebx
        jmp L13
    L12:
        mov dword ptr [esp+0x4b8], ebx
        mov dword ptr [esp+0x304], 0x1
    L13:
        lea ecx, [esp+0x14]
        push ecx
        mov ecx, 0x10027080
        call FUN_10005d50
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0x4d0], 0xffffffff
        call FUN_10001370
        mov ecx, dword ptr [esp+0x4c8]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x58
    }
}
