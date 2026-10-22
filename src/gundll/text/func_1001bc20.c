/*
 * FUN_1001BC20 (606 B) - __stdcall, RET 0xc.  SEH-framed hash-list
 * registration.  If arg1==0 allocates a 0x3c-byte object (FUN_10001d50),
 * ctor-inits it (FUN_100069f0 / FUN_1001bef0) and inserts a node via
 * FUN_1000c410; else registers arg2 into arg3's table or allocates a new
 * object.  On failure tears down via FUN_10006320/FUN_10006240/FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);      /* rel32 call (alloc) */
extern void __cdecl FUN_100069f0(void);      /* rel32 call, thiscall */
extern void __cdecl FUN_1001bef0(void);      /* rel32 call, thiscall */
extern void *__cdecl FUN_1000c410(void);     /* rel32 call, 1 arg */
extern void __cdecl FUN_100062a0(void);      /* rel32 call, 3 args */
extern void __cdecl FUN_10006320(void);      /* rel32 call, 3 args */
extern void __cdecl FUN_10006240(void);      /* rel32 call, ecx=this */
extern void __cdecl FUN_10001d60(void);      /* rel32 call (free) */
extern void *g_10055050;                     /* abs data @ 0x10055050 */

__declspec(naked) void __stdcall FUN_1001BC20(void)
{
    __asm {
        mov     eax, fs:[0]
        push    -1
        push    0x1004814e
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        xor     ebp, ebp
        cmp     edi, ebp
        jne     L_bd05
        mov     edi, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [edi + 0x34]
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x34], esi
        cmp     esi, ebp
        mov     dword ptr [esp + 0x28], ebp
        je      L_bc92
        push    8
        push    ebp
        push    0x10004af0
        push    0x1001b030
        mov     ecx, esi
        call    FUN_100069f0
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp + 0x2c], 1
        call    FUN_1001bef0
        mov     eax, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x34], eax
        mov     ebp, esi
    L_bc92:
        test    ebp, ebp
        mov     dword ptr [esp + 0x28], 0xffffffff
        mov     dword ptr [esp + 0x34], ebp
        je      L_be77
        mov     ecx, dword ptr [esp + 0x38]
        mov     edi, dword ptr [ecx]
        push    ebx
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 2]
        mov     edx, dword ptr [g_10055050]
        mov     ecx, dword ptr [edi + 4]
        xor     ebx, ebx
        mov     bx, ax
        push    edx
        mov     esi, ebx
        shl     esi, 4
        add     esi, ecx
        call    FUN_1000c410
        test    eax, eax
        je      L_be42
        mov     dword ptr [eax + 8], ebp
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 4], esi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esi], eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 4], eax
    L_bceb:
        inc     dword ptr [edi + 0x24]
    L_bcee:
        mov     al, 1
    L_bcf0:
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret     0xc
    L_bd05:
        mov     esi, dword ptr [esp + 0x34]
        cmp     esi, ebp
        jne     L_bd22
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edi, dword ptr [edi + 0x34]
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [edx + ecx*4], edi
        inc     dword ptr [eax + 0xc]
        jmp     L_bcee
    L_bd22:
        mov     ebx, dword ptr [esi + 0x34]
        push    0x3c
        call    FUN_10001d50
        mov     ebp, eax
        add     esp, 4
        mov     dword ptr [esp + 0x34], ebp
        test    ebp, ebp
        mov     dword ptr [esp + 0x28], 2
        je      L_bd62
        push    8
        push    0
        push    0x10004af0
        push    0x1001b030
        mov     ecx, ebp
        call    FUN_100069f0
        mov     dword ptr [ebp + 0x34], ebx
        mov     dword ptr [ebp + 0x38], 0
        jmp     L_bd64
    L_bd62:
        xor     ebp, ebp
    L_bd64:
        test    ebp, ebp
        mov     dword ptr [esp + 0x28], 0xffffffff
        mov     dword ptr [esp + 0x34], ebp
        je      L_be77
        xor     eax, eax
        cmp     eax, 0x1001be80
        je      L_bdbe
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x1001c000
        push    esi
        mov     dword ptr [esp + 0x24], 0x1001be80
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x1c], edi
        mov     byte ptr [esp + 0x20], al
        call    FUN_100062a0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1001c000
        push    edi
        mov     dword ptr [esp + 0x1c], esi
        mov     byte ptr [esp + 0x20], 1
        call    FUN_100062a0
    L_bdbe:
        mov     eax, dword ptr [ebp + 0x24]
        test    eax, eax
        jne     L_bdfb
        mov     dword ptr [esp + 0x38], ebp
        push    0
        push    0x10006140
        push    ebp
        mov     dword ptr [esp + 0x34], 3
        call    FUN_10006320
        mov     ecx, ebp
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    FUN_10006240
        push    ebp
        call    FUN_10001d60
        add     esp, 4
        jmp     L_bcee
    L_bdfb:
        mov     eax, dword ptr [esp + 0x38]
        mov     edi, dword ptr [eax + 4]
        push    ebx
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 2]
        mov     ecx, dword ptr [g_10055050]
        xor     ebx, ebx
        mov     bx, ax
        mov     eax, dword ptr [edi + 4]
        push    ecx
        mov     esi, ebx
        shl     esi, 4
        add     esi, eax
        call    FUN_1000c410
        test    eax, eax
        je      L_be42
        mov     dword ptr [eax + 8], ebp
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 4], esi
        mov     edx, dword ptr [esi]
        mov     dword ptr [eax], edx
        mov     dword ptr [esi], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 4], eax
        jmp     L_bceb
    L_be42:
        mov     esi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x38], esi
        push    0
        push    0x10006140
        push    esi
        mov     dword ptr [esp + 0x34], 4
        call    FUN_10006320
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    FUN_10006240
        push    esi
        call    FUN_10001d60
        add     esp, 4
    L_be77:
        xor     al, al
        jmp     L_bcf0
    }
}
