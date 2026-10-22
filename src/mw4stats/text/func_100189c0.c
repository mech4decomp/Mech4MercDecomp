/* MW4Stats.dll — gap region 0x100189C0..0x10018BB0 (496 B)
 * One function 0x100189C0 (ret 8) plus 10 trailing NOPs.
 */

extern void* g_100210ec;
extern void* g_100210f4;
extern void* g_100210f8;
extern unsigned short g_100274ec;

__declspec(naked) void FUN_100189c0(void)
{
    __asm {
        /* ---- fn 0x100189C0 ---- */
        mov eax, dword ptr [esp+8]
        push edi
        xor edi, edi
        mov ecx, dword ptr [eax+4]
        cmp ecx, edi
        je LERR
        cmp word ptr [ecx], di
        je LERR
        mov edx, dword ptr [eax]
        push ebp
        mov ebp, dword ptr [esp+0xc]
        push esi
        mov ecx, dword ptr [ebp+0x34]
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [ebp+0x34]
        mov edx, dword ptr [eax+0x10]
        mov dword ptr [ecx+0x10], edx
        mov esi, dword ptr [eax+4]
        mov eax, dword ptr [ebp+0xe4]
        mov dword ptr [esp+0x10], esi
        cmp eax, edi
        jbe L1
        mov eax, dword ptr [ebp+0xd8]
        cmp eax, edi
        je L1
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L1:
        cmp esi, edi
        push ebx
        mov dword ptr [ebp+0xd8], edi
        mov dword ptr [ebp+0xe8], edi
        mov dword ptr [ebp+0xe4], edi
        je L2
        cmp word ptr [esi], di
        je L2
        push esi
        call dword ptr [g_100210f4]
        mov edi, eax
        add esp, 4
        shl edi, 1
        mov dword ptr [esp+0x18], edi
        je L2
        mov eax, dword ptr [ebp+0xe4]
        mov ecx, dword ptr [ebp+0xe8]
        lea eax, [eax+edi+2]
        cmp eax, ecx
        jbe L3
        mov ecx, dword ptr [ebp+0xec]
        add eax, ecx
        push eax
        mov dword ptr [ebp+0xe8], eax
        call dword ptr [g_100210f8]
        mov ebx, eax
        xor edx, edx
        add esp, 4
        cmp ebx, edx
        jne L4
        cmp dword ptr [ebp+0xe4], edx
        jbe L5
        mov eax, dword ptr [ebp+0xd8]
        cmp eax, edx
        je L5
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
        xor edx, edx
L5:
        mov dword ptr [ebp+0xd8], edx
        mov dword ptr [ebp+0xe8], edx
        mov dword ptr [ebp+0xe4], edx
        jmp L2
L4:
        mov ecx, dword ptr [ebp+0xe4]
        cmp ecx, edx
        jbe L6
        mov esi, dword ptr [ebp+0xd8]
        mov edx, ecx
        mov edi, ebx
        xor eax, eax
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr [ebp+0xe4]
        mov ecx, dword ptr [ebp+0xe8]
        sub ecx, edx
        lea edi, [edx+ebx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [ebp+0xd8]
        push eax
        call dword ptr [g_100210ec]
        mov edi, dword ptr [esp+0x1c]
        mov esi, dword ptr [esp+0x18]
        add esp, 4
L6:
        mov dword ptr [ebp+0xd8], ebx
L3:
        mov eax, dword ptr [ebp+0xd8]
        mov ecx, edi
        mov edi, dword ptr [ebp+0xe4]
        mov edx, ecx
        add edi, eax
        mov eax, dword ptr [esp+0x18]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [ebp+0xe4]
        add ecx, eax
        mov dword ptr [ebp+0xe4], ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp+0xd8]
        mov byte ptr [ecx+eax], 0
        mov edx, dword ptr [ebp+0xe4]
        mov eax, dword ptr [ebp+0xd8]
        mov byte ptr [edx+eax+1], 0
L2:
        mov eax, dword ptr [ebp+0xe4]
        pop ebx
        test eax, eax
        jbe L7
        mov ecx, dword ptr [ebp+0x34]
        mov eax, dword ptr [ebp+0xd8]
        pop esi
        pop ebp
        mov dword ptr [ecx+4], eax
        xor eax, eax
        pop edi
        ret 8
L7:
        mov ecx, dword ptr [ebp+0x34]
        mov eax, offset g_100274ec
        pop esi
        pop ebp
        mov dword ptr [ecx+4], eax
        xor eax, eax
        pop edi
        ret 8
LERR:
        mov eax, 0x80070057
        pop edi
        ret 8

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
    }
}
