/*
 * FUN_00755ba0 (205 B) — __fastcall method (ECX = this).
 *
 * Sound-buffer management: enters a critical section, updates buffer state
 * flags, and (re)creates a 3D sound buffer. __fastcall, no stack args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b110;   /* EnterCriticalSection (IAT) */
extern void *g_0076b100;   /* LeaveCriticalSection (IAT) */
extern void __stdcall FUN_00756c40(void);
extern void __stdcall FUN_00727060(void *p);
extern void __stdcall FUN_00756a20(void);
extern int __stdcall FUN_00740d60(int a, void *b, void *c);
extern int __cdecl FUN_006fab90(void *s);

__declspec(naked) void __fastcall FUN_00755ba0(void)
{
    __asm {
        push    esi
        push    edi
        push    0x858ac8
        mov     esi, ecx
        call    dword ptr [g_0076b110]
        mov     ecx, esi
        call    FUN_00756c40
        mov     ecx, dword ptr [esi + 0x70]
        push    esi
        call    FUN_00727060
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_5BF4
        mov     ecx, dword ptr [esi + 0x70]
        cmp     eax, dword ptr [ecx + 0x58]
        jz      L_5BF4
        mov     ecx, esi
        call    FUN_00756a20
        test    byte ptr [esi + 0xc], 0x4
        jz      L_5BE7
        mov     byte ptr [esi + 0x74], 0x1
        mov     byte ptr [esi + 0x99], 0x1
        jmp     L_5BFB
L_5BE7:
        mov     byte ptr [esi + 0x74], 0x0
        mov     byte ptr [esi + 0x99], 0x1
        jmp     L_5BFB
L_5BF4:
        mov     byte ptr [esi + 0x99], 0x0
L_5BFB:
        mov     edx, dword ptr [esi + 0x70]
        mov     al, byte ptr [edx + 0xb0]
        test    al, al
        jz      L_5C11
        mov     byte ptr [esi + 0x9a], 0x1
        jmp     L_5C18
L_5C11:
        mov     byte ptr [esi + 0x9a], 0x0
L_5C18:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     edi, dword ptr [g_0076b100]
        jz      L_5C63
        mov     ecx, dword ptr [esi + 0x68]
        test    cl, 0x60
        jnz     L_5C31
        test    ch, 0x2
        jz      L_5C5D
L_5C31:
        lea     ecx, [esi + 0x4]
        push    ecx
        push    0x7a30d0
        push    eax
        call    FUN_00740d60
        test    eax, eax
        jz      L_5C5D
        push    0x7ae4d8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_5C56
        int     3
L_5C56:
        push    0x858ac8
        call    edi
L_5C5D:
        mov     edx, dword ptr [esi + 0x68]
        mov     dword ptr [esi + 0x6c], edx
L_5C63:
        push    0x858ac8
        call    edi
        pop     edi
        pop     esi
        ret
    }
}
