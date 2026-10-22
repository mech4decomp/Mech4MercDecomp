/*
 * FUN_0065d2d0 (300 B) — __thiscall (ECX=this), RET, returns this.
 *
 * Constructor: zeroes header fields, fills a 400x4 float array with
 * -1.0f, initializes sub-objects via FUN_00547ba0 / FUN_005634e0,
 * allocates a 0x148-byte object (FUN_004084d0 + FUN_004b6560),
 * initializes it via FUN_004b6820, copies a 0xc-dword template
 * (DAT_007b9460), and dispatches through an indirect vtable call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007da9ec;
extern int DAT_0080da6c;
extern int DAT_007dab40;
extern int DAT_007dab44;
extern void *g_7b9460;               /* template data */
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b6560(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004b6820(void);

__declspec(naked) void __stdcall FUN_0065d2d0(void *this)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        mov     ebp, ecx
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [ebp], ebx
        mov     byte ptr [ebp + 0x4], bl
        mov     byte ptr [ebp + 0x5], bl
        mov     byte ptr [ebp + 0x6], bl
        lea     eax, [ebp + 0x12c8]
        mov     ecx, 0x190
L_fill:
        mov     edx, 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0xc], edx
        add     eax, 0x10
        dec     ecx
        jnz     L_fill
        lea     eax, [esp + 0x14]
        lea     esi, [ebp + 0x2be0]
        push    eax
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     edi, [ebp + 0x2bc8]
        mov     dword ptr [ebp + 0x2bd0], ebx
        lea     ecx, [esi + 0x8]
        mov     dword ptr [edi], ebx
        mov     dword ptr [ebp + 0x2bd4], ebx
        mov     byte ptr [ebp + 0x2bd8], bl
        mov     dword ptr [ebp + 0x2bdc], ebx
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        push    0x8
        mov     ecx, esi
        call    FUN_005634e0
        mov     eax, dword ptr [DAT_007da9ec]
        mov     edx, dword ptr [esi + 0x4]
        push    eax
        mov     byte ptr [edx], bl
        mov     dword ptr [ebp + 0x2bec], ebx
        mov     dword ptr [DAT_0080da6c], ebp
        call    FUN_006f4950
        push    0x148
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_alloc_done
        push    0x1f4
        mov     ecx, eax
        call    FUN_004b6560
        mov     ebx, eax
L_alloc_done:
        mov     dword ptr [ebp + 0x2bcc], ebx
        call    FUN_006f49a0
        lea     eax, [ebp + 0x12c8]
        push    eax
        lea     eax, [ebp + 0x8]
        push    eax
        push    edi
        mov     ecx, ebx
        call    FUN_004b6820
        mov     eax, dword ptr [ebp + 0x2bcc]
        mov     ebx, dword ptr [DAT_007dab40]
        lea     edi, [eax + 0xb0]
        mov     ecx, 0xc
        mov     esi, offset g_7b9460
        rep     movsd
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     dword ptr [eax + 0xec], 0xbf800000
        call    dword ptr [edx + 0x8]
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
