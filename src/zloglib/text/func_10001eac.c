/*
 * ZlogLib.dll - FUN_10001eac (0x10001EAC, 158 B, __cdecl)
 * MD5 update: appends a block of data to the running MD5 context.
 * Transcribed from ZlogLib.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001eac (158 B) -- MD5 update: appends a block of data to the running
 * MD5 context (ctx[0..3]=state, ctx[4]=count_low, ctx[5]=count_high,
 * ctx[6..]=64-byte buffer).
 */

extern void __cdecl FUN_100028e4(void);
extern void __cdecl FUN_10001fae(void);

__declspec(naked) void FUN_10001eac(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [esi + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov eax, ecx
        shr eax, 0x3
        mov edx, edi
        lea ecx, [ecx + edi*8]
        shl edx, 0x3
        and eax, 0x3f
        cmp ecx, edx
        mov dword ptr [esi + 0x10], ecx
        jnc L1
        inc dword ptr [esi + 0x14]
L1:
        push 0x40
        mov ecx, edi
        shr ecx, 0x1d
        add dword ptr [esi + 0x14], ecx
        pop ebx
        sub ebx, eax
        cmp edi, ebx
        jc L2
        push ebx
        push dword ptr [ebp + 0xc]
        lea eax, [eax + esi + 0x18]
        push eax
        call FUN_100028e4
        lea eax, [esi + 0x18]
        push eax
        push esi
        call FUN_10001fae
        add esp, 0x14
        mov dword ptr [ebp + 0x8], ebx
        add ebx, 0x3f
L3:
        cmp ebx, edi
        jnc L4
        mov eax, dword ptr [ebp + 0xc]
        lea eax, [eax + ebx - 0x3f]
        push eax
        push esi
        call FUN_10001fae
        add dword ptr [ebp + 0x8], 0x40
        pop ecx
        pop ecx
        add ebx, 0x40
        jmp L3
L4:
        xor eax, eax
        jmp L5
L2:
        and dword ptr [ebp + 0x8], 0x0
L5:
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0xc]
        sub edi, ecx
        push edi
        add ecx, edx
        push ecx
        lea eax, [eax + esi + 0x18]
        push eax
        call FUN_100028e4
        add esp, 0xc
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
