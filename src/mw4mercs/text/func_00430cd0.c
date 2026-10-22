/*
 * FUN_00430cd0 (174 B) — MLR look-up-light load/serialize. __thiscall
 * (RET 0x4). Reads fields through a stream vtable (+0x24), then writes
 * the lookup table entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00490310(void);
extern void FUN_00412a50(void);

__declspec(naked) void FUN_00430cd0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x10]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00490310
        mov     eax, dword ptr [esi]
        push    0xc
        lea     ecx, [edi+0x80]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     ebx, [edi+0x9c]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ebp, [edi+0xa0]
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [edi+0x8c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [edi+0x90]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        lea     edx, [edi+0xa4]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     ecx, [edi+0xa8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     eax, dword ptr [ebp]
        imul    eax, dword ptr [ebx]
        test    eax, eax
        jle     done
        mov     edi, dword ptr [edi+0xac]
        mov     ebx, eax
loop_start:
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [esi]
        push    0x2000
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        add     edi, 0x4
        dec     ebx
        jnz     loop_start
done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
