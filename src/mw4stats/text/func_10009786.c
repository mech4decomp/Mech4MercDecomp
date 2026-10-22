/* MW4Stats.dll — gap region 0x10009786..0x10009AD0 (842 B)
 * One large function 0x10009790 (ret 8) plus 10 leading + 4 trailing NOPs.
 */

extern void* g_10021060;
extern void* g_1002105c;
extern void* g_100210ec;
extern void* g_100210f4;
extern unsigned short g_10025f0c;
extern unsigned short g_10025edc;
extern unsigned short g_100274ec;
extern void* g_100213b8;
extern void* g_1002138c;
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_10009ad0(void);
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_1000b7b0(void);

__declspec(naked) void FUN_10009786(void)
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

        /* ---- fn 0x10009790 ---- */
        sub esp, 0x254
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x260]
        push esi
        push edi
        mov eax, dword ptr [ebp+8]
        test eax, eax
        je L1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040210
        pop ebx
        add esp, 0x254
        ret 8
L1:
        mov esi, dword ptr [esp+0x26c]
        mov edi, dword ptr [g_10021060]
        push 0x1c
        push esi
        call edi
        mov ebx, dword ptr [g_1002105c]
        test eax, eax
        jne LERR
        cmp dword ptr [esi], 0x1c
        jne LERR
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        je LERR
        mov eax, dword ptr [esi+0x10]
        push -1
        push eax
        call ebx
        test eax, eax
        jne LERR
        mov ecx, dword ptr [esi+0x14]
        push -1
        push ecx
        call ebx
        test eax, eax
        je L2
        mov eax, dword ptr [ebp+0x34]
        lea ebx, [ebp+0x28]
        xor edi, edi
        cmp eax, edi
        jbe L3
        mov eax, dword ptr [ebx]
        cmp eax, edi
        je L3
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L3:
        mov edx, offset g_10025f0c
        mov dword ptr [ebx], edi
        test edx, edx
        mov dword ptr [ebx+0x10], edi
        mov dword ptr [ebx+0xc], edi
        je L4
        cmp word ptr [g_10025f0c], di
        je L4
        push edx
        call dword ptr [g_100210f4]
        add esp, 4
        shl eax, 1
        push eax
        push offset g_10025f0c
        jmp L5
L2:
        mov eax, dword ptr [esi+0x14]
        xor edi, edi
        push eax
        call dword ptr [g_100210f4]
        add esp, 4
        cmp eax, 1
        jbe L6
        mov edx, dword ptr [esi+0x14]
        mov ecx, 1
        lea edx, [edx+eax*2-2]
L7:
        mov bx, word ptr [edx]
        cmp bx, 0x5c
        je L8
        cmp bx, 0x2f
        jne L6
L8:
        inc edi
        sub edx, 2
        inc ecx
        cmp ecx, eax
        jb L7
L6:
        mov ecx, edi
        mov edx, dword ptr [esi+0x14]
        neg ecx
        shl ecx, 0x1f
        sub ecx, edi
        lea ebx, [ebp+0x28]
        add ecx, eax
        shl ecx, 1
        push ecx
        push edx
L5:
        mov ecx, ebx
        call FUN_100016b0
L4:
        mov ecx, dword ptr [ebp+0xcc]
        mov eax, dword ptr [esi+0x10]
        lea edi, [ebp+0xc0]
        mov dword ptr [esp+0x10], eax
        test ecx, ecx
        jbe L9
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je L9
        push ecx
        call dword ptr [g_100210ec]
        mov eax, dword ptr [esp+0x14]
        add esp, 4
L9:
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [edi], ecx
        mov dword ptr [edi+0x10], ecx
        mov dword ptr [edi+0xc], ecx
        je L10
        cmp word ptr [eax], cx
        je L10
        push eax
        call dword ptr [g_100210f4]
        add esp, 4
        mov ecx, edi
        shl eax, 1
        push eax
        mov eax, dword ptr [esp+0x14]
        push eax
        call FUN_100016b0
L10:
        test byte ptr [esi+8], 0x80
        je L11
        mov ecx, dword ptr [esi+0x18]
        mov dword ptr [esp+0x10], ecx
        jmp L12
L11:
        mov dword ptr [esp+0x10], offset g_10025edc
        mov ecx, dword ptr [esp+0x10]
L12:
        mov eax, dword ptr [ebp+0x164]
        lea edi, [ebp+0x158]
        test eax, eax
        jbe L13
        mov eax, dword ptr [edi]
        test eax, eax
        je L13
        push eax
        call dword ptr [g_100210ec]
        mov ecx, dword ptr [esp+0x14]
        add esp, 4
L13:
        xor eax, eax
        cmp ecx, eax
        mov dword ptr [edi], eax
        mov dword ptr [edi+0x10], eax
        mov dword ptr [edi+0xc], eax
        je L14
        cmp word ptr [ecx], ax
        je L14
        push ecx
        call dword ptr [g_100210f4]
        mov ecx, dword ptr [esp+0x14]
        add esp, 4
        shl eax, 1
        push eax
        push ecx
        mov ecx, edi
        call FUN_100016b0
L14:
        mov edx, dword ptr [esi]
        mov dword ptr [ebp+0xc], edx
        mov eax, dword ptr [esi+4]
        mov dword ptr [ebp+0x10], eax
        mov ecx, dword ptr [esi+8]
        mov dword ptr [ebp+0x14], ecx
        mov edx, dword ptr [esi+0xc]
        mov dword ptr [ebp+0x18], edx
        mov eax, dword ptr [ebx+0xc]
        test eax, eax
        jbe L15
        mov ebx, dword ptr [ebx]
        jmp L16
L15:
        mov ebx, offset g_100274ec
L16:
        mov dword ptr [ebp+0x20], ebx
        mov eax, dword ptr [edi+0xc]
        test eax, eax
        jbe L17
        mov edi, dword ptr [edi]
        jmp L18
L17:
        mov edi, offset g_100274ec
L18:
        mov dword ptr [ebp+0x24], edi
        mov eax, dword ptr [ebp+0xcc]
        test eax, eax
        jbe L19
        mov eax, dword ptr [ebp+0xc0]
        jmp L20
L19:
        mov eax, offset g_100274ec
L20:
        push ebp
        mov dword ptr [ebp+0x1c], eax
        call FUN_10009ad0
        mov eax, dword ptr [ebp+0x10]
        mov ebx, eax
        and bl, 4
        neg bl
        sbb bl, bl
        and ebx, 0xb9
        test al, 2
        je L21
        push 0x18
        call FUN_1000a120
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je L22
        mov byte ptr [eax+4], bl
        mov dword ptr [eax+8], ecx
        mov dword ptr [eax+0xc], ecx
        mov dword ptr [eax+0x10], ecx
        mov dword ptr [eax+0x14], ecx
        mov dword ptr [eax], offset g_100213b8
        jmp L23
L22:
        xor eax, eax
L23:
        cmp eax, ecx
        mov dword ptr [ebp+8], eax
        jne L24
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        add esp, 0x254
        ret 8
L21:
        push 8
        call FUN_1000a120
        add esp, 4
        test eax, eax
        je L25
        mov byte ptr [eax+4], bl
        mov dword ptr [eax], offset g_1002138c
        mov ecx, eax
        jmp L26
L25:
        xor ecx, ecx
L26:
        test ecx, ecx
        mov dword ptr [ebp+8], ecx
        jne L27
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        add esp, 0x254
        ret 8
L27:
        mov eax, dword ptr [ecx]
        lea edx, [esp+0x14]
        push edx
        mov edx, dword ptr [ebp+0x20]
        push edx
        call dword ptr [eax+4]
        cmp eax, -1
        jne L28
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040230
        pop ebx
        add esp, 0x254
        ret 8
L28:
        mov ecx, dword ptr [ebp+8]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx+0xc]
L24:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x254
        ret 8
LERR:
        push 0x1c
        push esi
        call edi
        test eax, eax
        jne LERR2
        cmp dword ptr [esi], 0x1c
        jne LERR2
        mov eax, dword ptr [esi+0x10]
        push -1
        push eax
        call ebx
        test eax, eax
        jne LERR2
        mov ecx, dword ptr [esi+0x10]
        push 3
        push ecx
        call FUN_1000b7b0
        add esp, 8
LERR2:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        add esp, 0x254
        ret 8

        nop
        nop
        nop
        nop
    }
}
