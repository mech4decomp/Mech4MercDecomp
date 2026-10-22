/*
 * FUN_006d3160 (248 B) — Object method with vtable dispatch and refcount
 * decrement.
 *
 * ECX = this. Calls a virtual method on ESI, builds strings via
 * FUN_00412570/FUN_004125e0/FUN_00412740, decrements refcounts (freeing
 * when they hit zero), and calls FUN_004db550.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76c5a8[];  /* string literal */
extern void FUN_00412570(void *p);
extern int FUN_004125e0(void *p, void *s);
extern void FUN_00412740(int v);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004db550(int a, int b, int c);

__declspec(naked) unsigned char __fastcall FUN_006d3160(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        mov     ebx, ecx
        jz      loc_6d3250
        mov     eax, dword ptr [esi + 0x24]
        shr     eax, 3
        test    al, 1
        jz      loc_6d3183
        pop     esi
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
loc_6d3183:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edi, eax
        test    edi, edi
        jz      loc_6d323c
        mov     eax, dword ptr [ebx]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x14]
        push    offset g_76c5a8
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      loc_6d31d9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_6d31d9
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_6d31d9:
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      loc_6d320f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_6d320f
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_6d320f:
        mov     ecx, dword ptr [esi + 0x24]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    esi
        call    FUN_004db550
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0xc
        test    eax, eax
        jz      loc_6d323c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_6d323c
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_6d323c:
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        pop     edi
        jz      loc_6d3250
        or      dword ptr [esi + 0x24], 8
        pop     esi
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
loc_6d3250:
        pop     esi
        xor     al, al
        pop     ebx
        pop     ecx
        ret     4
    }
}
