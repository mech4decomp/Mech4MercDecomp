/* FUN_0046f900 - MLR mesh-buffer init (357 B) */

extern int g_7b958c;
extern int g_7d9988;
extern int g_7da5e4;
extern int g_7d9984;
extern int g_7d9980;
extern int g_7d997c;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_0046f900(void)
{
    __asm {
        mov eax, dword ptr [g_7b958c]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        xor ebx, ebx
        push ebx
        push 0x76f1e8
        call FUN_006f4710
        push 0x18
        mov dword ptr [g_7d9988], eax
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        cmp esi, ebx
        jz L46f950
        mov ecx, dword ptr [g_7da5e4]
        push ecx
        push 0x76f1c4
        push 0x5a
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi+0x14], 0x46fc00
        mov dword ptr [g_7d9984], esi
        jmp L46f956
L46f950:
        mov dword ptr [g_7d9984], ebx
L46f956:
        push 0x8
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebx
        jz L46f96b
        mov dword ptr [eax], ebx
        mov dword ptr [eax+0x4], ebx
        jmp L46f96d
L46f96b:
        xor eax, eax
L46f96d:
        mov ebp, eax
        mov edi, dword ptr [ebp+0x4]
        cmp edi, 0x200
        mov dword ptr [g_7d9980], eax
        jz L46f9dc
        push 0x1000
        call FUN_004084d0
        mov ebx, dword ptr [ebp]
        add esp, 0x4
        test ebx, ebx
        mov esi, eax
        jz L46f9d0
        cmp edi, 0x200
        mov edx, 0x200
        ja L46f9a4
        mov edx, edi
L46f9a4:
        mov eax, edx
        dec edx
        test eax, eax
        jz L46f9c7
        mov ecx, ebx
        lea eax, [esi+edx*8]
        sub ecx, esi
        inc edx
L46f9b3:
        mov edi, dword ptr [ecx+eax*1]
        mov dword ptr [eax], edi
        mov edi, dword ptr [ecx+eax*1+0x4]
        mov dword ptr [eax+0x4], edi
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L46f9b3
L46f9c7:
        push ebx
        call FUN_004084e0
        add esp, 0x4
L46f9d0:
        mov dword ptr [ebp], esi
        mov dword ptr [ebp+0x4], 0x200
        xor ebx, ebx
L46f9dc:
        push 0x8
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebx
        jz L46f9f1
        mov dword ptr [eax], ebx
        mov dword ptr [eax+0x4], ebx
        jmp L46f9f3
L46f9f1:
        xor eax, eax
L46f9f3:
        mov ebp, eax
        mov edi, dword ptr [ebp+0x4]
        cmp edi, 0x100
        mov dword ptr [g_7d997c], eax
        jz L46fa60
        push 0x800
        call FUN_004084d0
        mov ebx, dword ptr [ebp]
        add esp, 0x4
        test ebx, ebx
        mov esi, eax
        jz L46fa56
        cmp edi, 0x100
        mov edx, 0x100
        ja L46fa2a
        mov edx, edi
L46fa2a:
        mov ecx, edx
        dec edx
        test ecx, ecx
        jz L46fa4d
        mov ecx, ebx
        lea eax, [esi+edx*8]
        sub ecx, esi
        inc edx
L46fa39:
        mov edi, dword ptr [ecx+eax*1]
        mov dword ptr [eax], edi
        mov edi, dword ptr [ecx+eax*1+0x4]
        mov dword ptr [eax+0x4], edi
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L46fa39
L46fa4d:
        push ebx
        call FUN_004084e0
        add esp, 0x4
L46fa56:
        mov dword ptr [ebp], esi
        mov dword ptr [ebp+0x4], 0x100
L46fa60:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
