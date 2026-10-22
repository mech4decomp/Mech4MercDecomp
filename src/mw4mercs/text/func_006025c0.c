/*
 * FUN_006025c0 (137 B) — __fastcall (ECX = param_1), RET.
 * Walks two linked lists at this+0x280 and this+0x288. For each node whose
 * byte[0x28] is set and byte[0x29] is clear, calls FUN_00707e70(0) and
 * compares the node's double at +0x20; if it exceeds the returned value,
 * invokes the node's virtual method (call [vtbl]) with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(int);

__declspec(naked) void __fastcall FUN_006025c0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0x280]
l_cb:
        test    edi, edi
        jz      l_605
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      l_605
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        jz      l_5f0
        mov     al, byte ptr [esi + 0x29]
        test    al, al
        jz      l_cb
l_5e6:
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        jmp     l_cb
l_5f0:
        push    0x0
        call    FUN_00707e70
        fld     qword ptr [esi + 0x20]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     l_5e6
        jmp     l_cb
l_605:
        mov     edi, dword ptr [ebx + 0x288]
l_60b:
        test    edi, edi
        jz      l_645
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      l_645
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        jz      l_630
        mov     al, byte ptr [esi + 0x29]
        test    al, al
        jz      l_60b
l_626:
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        jmp     l_60b
l_630:
        push    0x0
        call    FUN_00707e70
        fld     qword ptr [esi + 0x20]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     l_626
        jmp     l_60b
l_645:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
