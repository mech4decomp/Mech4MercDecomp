/* MW4Stats.dll — gap region 0x1000A1B1..0x1000A4E0 (815 B)
 * One large __thiscall function 0x1000A1C0 (ret 8) plus 15 leading + 6 trailing NOPs.
 */

extern void* g_100210ec;
extern void* g_100210f4;
extern void* g_100210f8;
extern void __cdecl FUN_1000a4e0(void);
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_1000a550(void);
extern void __cdecl FUN_1000a5a0(void);

__declspec(naked) void FUN_1000a1b1(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn 0x1000A1C0 ---- */
        sub esp, 0x264
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x274]
        push esi
        push edi
        xor ebx, ebx
        mov eax, dword ptr [ebp+0xc]
        mov edi, ecx
        cmp eax, ebx
        mov dword ptr [esp+0x14], edi
        jbe L1
        mov eax, dword ptr [ebp]
        cmp eax, ebx
        je L1
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L1:
        mov ecx, dword ptr [esp+0x278]
        lea eax, [esp+0x24]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr [ebp], ebx
        mov dword ptr [ebp+0x10], ebx
        mov dword ptr [ebp+0xc], ebx
        call FUN_1000a4e0
        mov esi, eax
        cmp esi, -1
        mov dword ptr [esp+0x20], esi
        je LEND
        mov eax, dword ptr [esp+0x3c]
        mov edx, dword ptr [esp+0x38]
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [ebp+0xc]
        cmp eax, ebx
        mov dword ptr [esp+0x18], edx
        jbe L2
        mov eax, dword ptr [ebp]
        cmp eax, ebx
        je L2
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L2:
        lea ecx, [esp+0x50]
        mov dword ptr [ebp], ebx
        test ecx, ecx
        mov dword ptr [ebp+0x10], ebx
        mov dword ptr [ebp+0xc], ebx
        je L3
        cmp word ptr [esp+0x50], bx
        je L3
        lea edx, [esp+0x50]
        push edx
        call dword ptr [g_100210f4]
        mov esi, eax
        add esp, 4
        shl esi, 1
        mov dword ptr [esp+0x10], esi
        je L3
        mov eax, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        lea eax, [esi+eax+2]
        cmp eax, ecx
        jbe L4
        mov ecx, dword ptr [ebp+0x14]
        add eax, ecx
        push eax
        mov dword ptr [ebp+0x10], eax
        call dword ptr [g_100210f8]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne L5
        mov ecx, ebp
        call FUN_100011a0
        jmp L3
L5:
        mov ecx, dword ptr [ebp+0xc]
        test ecx, ecx
        jbe L6
        mov esi, dword ptr [ebp]
        mov edx, ecx
        mov edi, ebx
        xor eax, eax
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        sub ecx, edx
        lea edi, [edx+ebx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [ebp]
        push eax
        call dword ptr [g_100210ec]
        mov esi, dword ptr [esp+0x14]
        add esp, 4
L6:
        mov dword ptr [ebp], ebx
L4:
        mov edi, dword ptr [ebp]
        mov eax, dword ptr [ebp+0xc]
        mov ecx, esi
        lea esi, [esp+0x50]
        mov edx, ecx
        add edi, eax
        shr ecx, 2
        rep movsd
        mov eax, dword ptr [esp+0x10]
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [ebp+0xc]
        add ecx, eax
        mov dword ptr [ebp+0xc], ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp]
        mov byte ptr [eax+ecx], 0
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [ebp+0xc]
        mov byte ptr [edx+eax+1], 0
L3:
        mov esi, dword ptr [esp+0x20]
        mov edi, dword ptr [esp+0x14]
        lea ecx, [esp+0x24]
        push ecx
        push esi
        mov ecx, edi
        call FUN_1000a550
        test eax, eax
        je LEND
L7:
        mov ecx, dword ptr [esp+0x3c]
        mov edx, dword ptr [esp+0x1c]
        mov eax, dword ptr [esp+0x38]
        cmp ecx, edx
        ja L8
        jb L9
        cmp eax, dword ptr [esp+0x18]
        jae L8
L9:
        mov dword ptr [esp+0x18], eax
        mov eax, dword ptr [ebp+0xc]
        xor esi, esi
        mov dword ptr [esp+0x1c], ecx
        cmp eax, esi
        jbe L10
        mov eax, dword ptr [ebp]
        cmp eax, esi
        je L10
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L10:
        lea edx, [esp+0x50]
        mov dword ptr [ebp], esi
        test edx, edx
        mov dword ptr [ebp+0x10], esi
        mov dword ptr [ebp+0xc], esi
        je L8
        cmp word ptr [esp+0x50], si
        je L8
        lea eax, [esp+0x50]
        push eax
        call dword ptr [g_100210f4]
        mov edi, eax
        add esp, 4
        shl edi, 1
        mov dword ptr [esp+0x10], edi
        je L8
        mov ecx, dword ptr [ebp+0xc]
        lea eax, [edi+ecx+2]
        mov ecx, dword ptr [ebp+0x10]
        cmp eax, ecx
        jbe L11
        mov edx, dword ptr [ebp+0x14]
        add eax, edx
        push eax
        mov dword ptr [ebp+0x10], eax
        call dword ptr [g_100210f8]
        mov ebx, eax
        xor esi, esi
        add esp, 4
        cmp ebx, esi
        jne L12
        cmp dword ptr [ebp+0xc], esi
        jbe L13
        mov eax, dword ptr [ebp]
        cmp eax, esi
        je L13
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L13:
        mov dword ptr [ebp], esi
        mov dword ptr [ebp+0x10], esi
        mov dword ptr [ebp+0xc], esi
        jmp L8
L12:
        mov ecx, dword ptr [ebp+0xc]
        cmp ecx, esi
        jbe L14
        mov esi, dword ptr [ebp]
        mov eax, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        rep movsb
        mov edx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        sub ecx, edx
        lea edi, [edx+ebx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [ebp]
        push eax
        call dword ptr [g_100210ec]
        mov edi, dword ptr [esp+0x14]
        add esp, 4
L14:
        mov dword ptr [ebp], ebx
L11:
        mov eax, dword ptr [ebp+0xc]
        mov ecx, edi
        mov edi, dword ptr [ebp]
        mov edx, ecx
        lea esi, [esp+0x50]
        add edi, eax
        shr ecx, 2
        rep movsd
        mov eax, dword ptr [esp+0x10]
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [ebp+0xc]
        add ecx, eax
        mov dword ptr [ebp+0xc], ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp]
        mov byte ptr [eax+ecx], 0
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [ebp+0xc]
        mov byte ptr [edx+eax+1], 0
L8:
        mov esi, dword ptr [esp+0x20]
        mov edi, dword ptr [esp+0x14]
        lea ecx, [esp+0x24]
        push ecx
        push esi
        mov ecx, edi
        call FUN_1000a550
        test eax, eax
        jne L7
LEND:
        push esi
        mov ecx, edi
        call FUN_1000a5a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x264
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop
    }
}
