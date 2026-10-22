/*
 * FUN_006B4A90 (140 B) — Register a gosScript variable in one of three lists
 * depending on param_2 (scope: 0=global, 1=local, else=script).
 *
 * __cdecl, RET 0xC (three stack params: param_1, param_2, param_3).
 *
 * Disassembly:
 *   53                      push    ebx
 *   8B 1D 28 F3 82 00       mov     ebx, [0x0082f328]
 *   56                      push    esi
 *   8B 74 24 14             mov     esi, [esp + 0x14]
 *   57                      push    edi
 *   8D 7E 0F                lea     edi, [esi + 0xf]
 *   89 3D 28 F3 82 00       mov     [0x0082f328], edi
 *   E8 xx xx xx xx          call    FUN_006bfe50
 *   66 A1 F4 A0 83 00       mov     ax, [0x0083a0f4]
 *   57                      push    edi
 *   66 89 46 0C             mov     [esi + 0xc], ax
 *   89 1D 28 F3 82 00       mov     [0x0082f328], ebx
 *   E8 xx xx xx xx          call    FUN_006c0230
 *   84 C0                   test    al, al
 *   74 0E                   jz      ok
 *   57                      push    edi
 *   68 18 A1 79 00          push    0x79a118
 *   E8 xx xx xx xx          call    FUN_006bfa50
 *   83 C4 08                add     esp, 8
 *   ok:
 *   8B 44 24 14             mov     eax, [esp + 0x14]
 *   85 C0                   test    eax, eax
 *   75 14                   jnz     not0
 *   8B 0D 44 F3 82 00       mov     ecx, [0x0082f344]
 *   5F                      pop     edi
 *   89 0E                   mov     [esi], ecx
 *   89 35 44 F3 82 00       mov     [0x0082f344], esi
 *   5E                      pop     esi
 *   5B                      pop     ebx
 *   C2 0C 00                ret     0xc
 *   not0:
 *   83 F8 01                cmp     eax, 1
 *   75 12                   jnz     other
 *   8B 44 24 10             mov     eax, [esp + 0x10]
 *   8B 50 04                mov     edx, [eax + 4]
 *   5F                      pop     edi
 *   89 16                   mov     [esi], edx
 *   89 70 04                mov     [eax + 4], esi
 *   5E                      pop     esi
 *   5B                      pop     ebx
 *   C2 0C 00                ret     0xc
 *   other:
 *   A1 38 F3 82 00          mov     eax, [0x0082f338]
 *   8B 40 08                mov     eax, [eax + 8]
 *   8B 48 04                mov     ecx, [eax + 4]
 *   5F                      pop     edi
 *   89 0E                   mov     [esi], ecx
 *   89 70 04                mov     [eax + 4], esi
 *   5E                      pop     esi
 *   5B                      pop     ebx
 *   C2 0C 00                ret     0xc
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006bfe50(void);
int __cdecl FUN_006c0230(void *ptr);
void __cdecl FUN_006bfa50(const char *fmt, ...);

__declspec(naked) void FUN_006b4a90(void)
{
    __asm {
        push    ebx
; mov ebx, [0x0082f328]
_emit 0x8B
_emit 0x1D
_emit 0x28
_emit 0xF3
_emit 0x82
_emit 0x00
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        lea     edi, dword ptr [esi + 0xf]
; mov [0x0082f328], edi
_emit 0x89
_emit 0x3D
_emit 0x28
_emit 0xF3
_emit 0x82
_emit 0x00
        call    FUN_006bfe50
; mov ax, word ptr [0x0083a0f4]
_emit 0x66
_emit 0xA1
_emit 0xF4
_emit 0xA0
_emit 0x83
_emit 0x00
        push    edi
        mov     word ptr [esi + 0xc], ax
; mov [0x0082f328], ebx
_emit 0x89
_emit 0x1D
_emit 0x28
_emit 0xF3
_emit 0x82
_emit 0x00
        call    FUN_006c0230
        test    al, al
        jz      ok
        push    edi
        push    0x79a118
        call    FUN_006bfa50
        add     esp, 8
ok:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jnz     not0
; mov ecx, [0x0082f344]
_emit 0x8B
_emit 0x0D
_emit 0x44
_emit 0xF3
_emit 0x82
_emit 0x00
        pop     edi
        mov     dword ptr [esi], ecx
; mov [0x0082f344], esi
_emit 0x89
_emit 0x35
_emit 0x44
_emit 0xF3
_emit 0x82
_emit 0x00
        pop     esi
        pop     ebx
        ret     0xc
not0:
        cmp     eax, 1
        jnz     other
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 4]
        pop     edi
        mov     dword ptr [esi], edx
        mov     dword ptr [eax + 4], esi
        pop     esi
        pop     ebx
        ret     0xc
other:
; mov eax, [0x0082f338]
_emit 0xA1
_emit 0x38
_emit 0xF3
_emit 0x82
_emit 0x00
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax + 4]
        pop     edi
        mov     dword ptr [esi], ecx
        mov     dword ptr [eax + 4], esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
