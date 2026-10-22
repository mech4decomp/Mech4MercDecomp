/*
 * FUN_006B18D0 (206 B) - Array/iterator update helper.
 *
 * __cdecl, RET (no stack cleanup; caller cleans). Uses arg2 (ESI),
 * arg1 (EBX) and arg6 (EDX at [ESP+0x28]).
 *
 * Computes a byte offset from arg2's +0x8/+0x10/+0x14 fields, calls
 * FUN_0041EA60(arg2, &arg2) (thiscall), conditionally invokes virtual
 * methods vtable[0xC4]/vtable[0xC8] on arg1 based on a flag byte and a
 * counter, then updates two indexed counters in a table reached through
 * the XOR-obfuscated global pointer chain 0x7DAB44/0x7DAB40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __fastcall FUN_0041ea60(void *, void *);

__declspec(naked) void FUN_006b18d0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        sub     edi, ebx
        shl     edi, 3
        cmp     eax, -0x14
        jz      loc_18ef
        lea     edi, [edi + eax*1 - 8]
loc_18ef:
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_0041ea60
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebx + 0xe0]
        mov     ebp, dword ptr [ecx + 0x14]
        mov     al, byte ptr [esp + 0x18]
        xor     edx, edx
        cmp     ebp, 1
        setnz   dl
        test    al, al
        mov     ebp, edx
        jz      loc_1930
        test    ebp, ebp
        jnz     loc_1928
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0xc4]
loc_1928:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jnz     loc_193e
loc_1930:
        test    ebp, ebp
        jz      loc_193e
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0xc8]
loc_193e:
        mov     eax, dword ptr [esi + 0x14]
        mov     ebx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x8]
        sub     eax, ebx
        shl     eax, 3
        cmp     esi, -0x14
        jz      loc_1955
        lea     eax, [eax + esi*1 - 8]
loc_1955:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x28]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add     ecx, 0x9c9c
        sub     eax, edi
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        pop     edi
        pop     esi
        add     edx, eax
        pop     ebp
        mov     dword ptr [ecx + 0xc00], edx
        pop     ebx
        ret
    }
}
