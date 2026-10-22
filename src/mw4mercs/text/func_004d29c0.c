/*
 * FUN_004d29c0 (121 B) — MLR network subsystem: renderer-table comparison /
 * update helper. __thiscall (this=ECX), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004d2330(void);

__declspec(naked) void FUN_004d29c0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        call    FUN_004d2310
        mov     ebx, dword ptr [ebp + 0x1c]
        test    ebx, ebx
        mov     esi, dword ptr [esp + 0x10]
        jnz     L_4d29ed
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L_4d29ed
        mov     ecx, ebp
        mov     bl, 0x1
        call    FUN_004d2330
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        ret     0x4
L_4d29ed:
        cmp     ebx, dword ptr [esi + 0x1c]
        jz      L_4d2a03
        mov     ecx, ebp
        xor     bl, bl
        call    FUN_004d2330
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        ret     0x4
L_4d2a03:
        mov     eax, dword ptr [esi]
        push    edi
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0xffffffec
        call    dword ptr [edx + 0x4]
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, eax
        mov     ecx, ebx
        xor     eax, eax
        repe cmpsb
        pop     edi
        mov     ecx, ebp
        setz    bl
        call    FUN_004d2330
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        ret     0x4
    }
}
