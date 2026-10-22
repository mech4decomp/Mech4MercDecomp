/*
 * FUN_005f20d0 (547 B) — __thiscall insertion helper.
 *
 * Validates a float pair against global bounds, converts to ints via _ftol,
 * looks up/allocates an entry in a global table, and inserts it into the
 * object's list (this+0x1c4/0x1c8/0x1cc), growing the buffer if needed.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __stdcall FUN_0075db4a(void);   /* _ftol */
extern void *__stdcall FUN_00676350(int a, int b);
extern void *__stdcall FUN_00416110(void);
extern void *__stdcall FUN_004084d0(int n);
extern void __stdcall FUN_005f2a90(void *dst, void *src);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_006763e0(int a, int b, void *c);

__declspec(naked) void __stdcall FUN_005f20d0(void *param)
{
    

extern int DAT_0080da60;
extern int DAT_0080da58;
extern int DAT_0080da54;
extern int DAT_00788100;
extern int DAT_007f2440;
extern int DAT_0080daa8;
__asm {
sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x28]
        fld     dword ptr [esi]
        mov     ebx, ecx
        fcomp dword ptr [DAT_0080da60]
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        fnstsw ax
        test    ah, 1
        jnz     L22E7
        fld     dword ptr [esi + 8]
        fcomp dword ptr [DAT_0080da60]
        fnstsw ax
        test    ah, 1
        jnz     L22E7
        fld     dword ptr [esi]
        fcomp dword ptr [DAT_0080da58]
        fnstsw ax
        test    ah, 1
        jz      L22E7
        fld     dword ptr [esi + 8]
        fcomp dword ptr [DAT_0080da54]
        fnstsw ax
        test    ah, 1
        jz      L22E7
        fld     dword ptr [esi]
        fmul dword ptr [DAT_00788100]
        call    FUN_0075db4a
        fld     dword ptr [esi + 8]
        fmul dword ptr [DAT_00788100]
        mov     ebp, eax
        mov     dword ptr [esp + 0x1C], ebp
        call    FUN_0075db4a
        mov     edi, eax
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x28], edi
        call    FUN_00676350
        add     esp, 8
        cmp     eax, ebx
        jz      L22E7
        test    eax, eax
        jz      L2178
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x18
        ret     4
L2178:
        mov eax, dword ptr [DAT_007f2440]
        mov     edx, dword ptr [eax + 0x3C]
        mov     edx, dword ptr [edx + 8]
        mov     ecx, edi
        shl     ecx, 9
        add     ecx, ebp
        mov     bx, word ptr [edx + ecx*2 + 0x40200]
        test    bl, 0x40
        jz      L21A3
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x18
        ret     4
L21A3:
        mov     ecx, dword ptr [eax + 0x3C]
        mov     ecx, dword ptr [ecx + 8]
        lea     eax, [edi + 0x100]
        lea     edx, [ebp + 0x100]
        shl     eax, 9
        mov     esi, ebx
        add     eax, edx
        or      esi, 0x40
        mov     word ptr [ecx + eax*2], si
        mov ecx, dword ptr [DAT_0080daa8]
        call    FUN_00416110
        xor     edx, edx
        cmp     eax, edx
        jz      L21E7
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], edi
        mov     word ptr [eax + 8], bx
        mov     dword ptr [eax + 0xC], edx
        mov     dword ptr [eax + 0x10], edx
        mov     ecx, eax
        jmp     L21E9
L21E7:
        xor     ecx, ecx
L21E9:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax + 0x1C8]
        cmp     esi, dword ptr [eax + 0x1CC]
        mov     dword ptr [esp + 0x14], ecx
        jz      L2213
        cmp     esi, edx
        jz      L2205
        mov     dword ptr [esi], ecx
L2205:
        add     esi, 4
        mov     dword ptr [eax + 0x1C8], esi
        jmp     L22DC
L2213:
        mov     ebp, dword ptr [eax + 0x1C4]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x2C], 1
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x2C]
        jc      L2239
        lea     ecx, [esp + 0x18]
L2239:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jz      L2259
        lea     edx, [ecx*4 + 0x0]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x2C], eax
        jmp     L225D
L2259:
        mov     dword ptr [esp + 0x2C], edx
L225D:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x2C]
        jz      L227B
        mov     ebx, ebp
L2267:
        push    ebx
        push    edi
        call    FUN_005f2a90
        add     ebx, 4
        add     esp, 8
        add     edi, 4
        cmp     ebx, esi
        jnz     L2267
L227B:
        test    edi, edi
        jz      L2285
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi], eax
L2285:
        cmp     esi, esi
        lea     ebx, [edi + 4]
        jz      L22A2
        mov     edi, esi
L228E:
        push    edi
        push    ebx
        call    FUN_005f2a90
        add     edi, 4
        add     esp, 8
        add     ebx, 4
        cmp     edi, esi
        jnz     L228E
L22A2:
        test    ebp, ebp
        mov     dword ptr [esp + 0x24], ebp
        jz      L22B3
        push    ebp
        call    FUN_004084e0
        add     esp, 4
L22B3:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x2C]
        mov     edx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x1C]
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x1C4], ecx
        lea     ecx, [ecx + edx*4]
        mov     dword ptr [eax + 0x1C8], ebx
        mov     dword ptr [eax + 0x1CC], ecx
L22DC:
        push    eax
        push    edi
        push    ebp
        call    FUN_006763e0
        add     esp, 0xC
L22E7:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x18
        ret     4
    }


}
