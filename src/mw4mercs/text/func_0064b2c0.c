/*
 * FUN_0064b2c0 (235 B) — __thiscall ABL "write object to stream" helper.
 * Serializes the object's name (this+4), a 4-byte id (this+0x20), and
 * (optionally) a name + id from this+0x38, then writes each static-data
 * array element through the stream's virtual write method (vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080d970;

extern void __cdecl FUN_0041e910(void);

__declspec(naked) void FUN_0064b2c0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [esp+10h]
        push    edi
        lea     edx, [ebp+4]
        or      ecx, 0ffffffffh
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        jz      L_b2ee
        mov     ebx, dword ptr [esi]
        or      ecx, 0ffffffffh
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [ebx+24h]
L_b2ee:
        mov     edx, dword ptr [esi]
        lea     eax, [ebp+20h]
        push    4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+24h]
        mov     ebx, dword ptr [ebp+38h]
        test    ebx, ebx
        jz      L_b341
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [esp+18h]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp+1ch], 1
        call    dword ptr [eax+24h]
        mov     edi, dword ptr [ebx+10h]
        mov     edx, dword ptr [esi]
        or      ecx, 0ffffffffh
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        push    4
        lea     eax, [esp+18h]
        mov     dword ptr [esp+18h], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+24h]
        mov     ecx, dword ptr [ebx+10h]
        push    ecx
        mov     ecx, esi
        call    FUN_0041e910
        jmp     L_b354
L_b341:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp+18h]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp+1ch], 0
        call    dword ptr [edx+24h]
L_b354:
        mov     eax, dword ptr [ebp+20h]
        mov     edx, dword ptr [g_0080d970]
        lea     ecx, [eax+eax*4]
        mov     ebx, dword ptr [edx+ecx*8+1ch]
        lea     eax, [edx+ecx*8]
        mov     ecx, dword ptr [eax+18h]
        xor     edi, edi
        test    ecx, ecx
        mov     dword ptr [esp+14h], ecx
        jle     L_b3a4
L_b374:
        mov     edx, dword ptr [esi]
        lea     eax, [edi*4]
        mov     ecx, dword ptr [eax+ebx*1]
        test    ecx, ecx
        jle     L_b38e
        push    ecx
        mov     ecx, dword ptr [ebp+24h]
        mov     eax, dword ptr [ecx+eax*1]
        push    eax
        jmp     L_b396
L_b38e:
        mov     ecx, dword ptr [ebp+24h]
        push    4
        add     ecx, eax
        push    ecx
L_b396:
        mov     ecx, esi
        call    dword ptr [edx+24h]
        mov     eax, dword ptr [esp+14h]
        inc     edi
        cmp     edi, eax
        jl      L_b374
L_b3a4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
