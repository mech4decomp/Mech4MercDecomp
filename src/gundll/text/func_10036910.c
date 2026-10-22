/*
 * FUN_10036910 (278 B) - __stdcall, RET 0x10.  SEH-guarded object factory.
 * If arg1 (ebp) != 0, allocates a 0x3c-byte object via FUN_10001d50; else
 * uses a stack buffer.  Fills a 5-tag header (type=5, size fields, flags,
 * field_0x10).  If arg1 != 0, allocates a 0x28-byte object and initializes
 * it via FUN_100340e0(edi, esi, edx, edx->field_0x10); on success stores
 * ecx=obj+0x18 into *arg1.  If arg1 == 0, calls FUN_10036a30 (thiscall,
 * this=arg3) with the buffer.  Returns S_OK / E_OUTOFMEMORY (0x8007000e).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call */
extern void __cdecl FUN_100340e0(void);    /* rel32 call */
extern void __cdecl FUN_10036a30(void);    /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_10036910(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10048c5b
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebp
        mov     ebp, dword ptr [esp + 0x5c]
        push    esi
        push    edi
        xor     edi, edi
        test    ebp, ebp
        je      L_36943
        push    0x3c
        call    FUN_10001d50
        add     esp, 4
        mov     esi, eax
        jmp     L_36947
L_36943:
        lea     esi, [esp + 0xc]
L_36947:
        test    esi, esi
        jne     L_36964
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
L_36964:
        test    ebp, ebp
        mov     al, byte ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esi], 5
        mov     word ptr [esi + 8], 0
        mov     dword ptr [esi + 4], 0
        mov     byte ptr [esi + 0xc], al
        mov     dword ptr [esi + 0x10], ecx
        je      L_369f0
        push    0x28
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x64], eax
        test    eax, eax
        mov     dword ptr [esp + 0x50], 0
        je      L_369cc
        mov     edx, dword ptr [esp + 0x58]
        test    edx, edx
        je      L_369b0
        lea     edi, [edx + 8]
        jmp     L_369b2
L_369b0:
        xor     edi, edi
L_369b2:
        mov     ecx, dword ptr [edx + 0x10]
        push    ecx
        add     edx, 0x54
        push    edx
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_100340e0
        test    eax, eax
        je      L_369ce
        lea     ecx, [eax + 0x18]
        jmp     L_369d0
L_369cc:
        xor     eax, eax
L_369ce:
        xor     ecx, ecx
L_369d0:
        test    eax, eax
        mov     dword ptr [ebp], ecx
        jne     L_36a10
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
L_369f0:
        mov     ecx, dword ptr [esp + 0x58]
        push    esi
        call    FUN_10036a30
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
L_36a10:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
    }
}
