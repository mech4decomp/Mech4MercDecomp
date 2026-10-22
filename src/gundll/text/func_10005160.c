/*
 * FUN_10005160 (332 B) - __stdcall, RET 0x8.  Hash-table node removal /
 * release routine.  Validates arg1->field_0x14 and arg1->field_0x7c,
 * walks the bucket chain (via edi->vtable[3] hash + edi->field_0x04 table),
 * unlinks/frees nodes through FUN_1000c4c0 / FUN_10004d90 / FUN_10001d60,
 * and calls FUN_10005a40 on the released object.  Returns an HRESULT-style
 * code (0xc1120008 / 0x80070057 / 0xc1120c01 / 0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10055050;                     /* abs data @ 0x10055050 */
extern void  __cdecl FUN_1000c4c0(void);     /* rel32 call, 2 args */
extern void  __cdecl FUN_10005a40(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_10004d90(void);     /* rel32 call (thiscall, ecx=this) */
extern void  __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10005160(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     cl, byte ptr [eax + 0x14]
        sub     esp, 8
        test    cl, cl
        push    ebx
        push    ebp
        push    esi
        push    edi
        jne     L_5181
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        add     esp, 8
        ret     0x8
L_5181:
        mov     edi, dword ptr [eax + 0x7c]
        test    edi, edi
        jne     L_5197
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        add     esp, 8
        ret     0x8
L_5197:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jne     L_51ae
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 8
        ret     0x8
L_51ae:
        push    eax
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 2]
        mov     ecx, dword ptr [edi + 4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 4
        mov     esi, dword ptr [ebx + ecx]
        add     ebx, ecx
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], ebx
        je      L_5274
L_51d2:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     ebp, dword ptr [esi]
        jns     L_5202
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [eax], ebp
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [ebp + 4], ecx
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi], 0
        mov     edx, dword ptr [g_10055050]
        push    esi
        push    edx
        call    FUN_1000c4c0
        jmp     L_521a
L_5202:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi + 8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [edi + 8]
        test    al, al
        jne     L_522f
        mov     ebx, dword ptr [esp + 0x10]
L_521a:
        cmp     ebp, ebx
        mov     esi, ebp
        jne     L_51d2
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120c01
        pop     ebx
        add     esp, 8
        ret     0x8
L_522f:
        mov     eax, dword ptr [edi + 0x28]
        xor     ebx, ebx
        cmp     eax, ebx
        jne     L_5257
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [edx], ebp
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [ebp + 4], eax
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi], ebx
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        jmp     L_5269
L_5257:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_526c
        or      eax, 0x80000000
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 8], ebx
L_5269:
        dec     dword ptr [edi + 0x24]
L_526c:
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, ebx
        jne     L_5283
L_5274:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120c01
        pop     ebx
        add     esp, 8
        ret     0x8
L_5283:
        mov     edx, dword ptr [esp + 0x1c]
        add     edx, -0x14
        push    edx
        call    FUN_10005a40
        mov     ecx, esi
        call    FUN_10004d90
        push    esi
        call    FUN_10001d60
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 8
        ret     0x8
    }
}
