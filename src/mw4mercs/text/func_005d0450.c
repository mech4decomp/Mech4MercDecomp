/*
 * FUN_005d0450 (746 B) - __thiscall (ECX = this), plain RET.
 *
 * Iterates a pointer array at this+0x4b0..this+0x4b4. For each element
 * (a float-triple), converts its components via _ftol, divides by 10, and
 * performs a nested scan over a 2D grid, writing 16-bit values into a
 * heightmap buffer and inserting records into a linked list at this+0x4cc.
 * Uses FUN_006f4950/FUN_006f49a0 for locking, FUN_004084d0 for allocation,
 * and FUN_005d6820/FUN_005d6660 for list management.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern int  __cdecl   FUN_0075db4a(void);   /* _ftol */
extern void FUN_00416110(void);
extern void *__cdecl  FUN_004084d0(int size);
extern void *__cdecl  FUN_005d6820(int a, int b, int c, int d);
extern void FUN_005d6660(int a, int b);

__declspec(naked) void __stdcall FUN_005d0450(void)
{
    

extern int DAT_007f244c;
extern int DAT_0080da60;
extern int DAT_0080da5c;
extern int DAT_0080da58;
extern int DAT_0080da54;
extern int DAT_007f2440;
extern int DAT_0080daa8;
__asm {
sub     esp, 0x34
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x4b0]
        cmp     eax, dword ptr [edi + 0x4b4]
        mov     dword ptr [esp + 0x4], edi
        mov     dword ptr [esp + 0x14], eax
        jz      loc_5d0735
        push    ebx
        push    ebp
        push    esi
        jmp     loc_5d0479
loc_5d0475:
        mov     eax, dword ptr [esp + 0x20]
loc_5d0479:
        mov     esi, dword ptr [eax]
        fld     dword ptr [esi + 8]
        call    FUN_0075db4a
        fld     dword ptr [esi + 4]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 31
        add     edx, eax
        mov     ebx, edx
        mov     dword ptr [esp + 0x40], ebx
        call    FUN_0075db4a
        mov     ecx, eax
        fld     dword ptr [esi + 0xc]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 31
        add     edx, ecx
        mov     dword ptr [esp + 0x34], edx
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        mov ecx, dword ptr [DAT_007f244c]
        sar     edx, 2
        mov     eax, edx
        shr     eax, 31
        add     edx, eax
        push    ecx
        mov     dword ptr [esp + 0x34], edx
        call    FUN_006f4950
        fld     dword ptr [esi]
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 31
        add     edx, eax
        mov     eax, dword ptr [esp + 0x34]
        mov     ebp, edx
        cmp     ebp, eax
        mov     dword ptr [esp + 0x1c], ebp
        jg      loc_5d0714
loc_5d0512:
        cmp     ebx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x14], ebx
        jg      loc_5d0703
        fild    dword ptr [esp + 0x1c]
        mov     edx, ebx
        lea     ecx, [ebx + 0x100]
        shl     ecx, 9
        shl     edx, 9
        fstp    dword ptr [esp + 0x24]
        add     edx, ebp
        lea     eax, [edx + edx + 0x40200]
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x18], eax
loc_5d0547:
        fld     dword ptr [esp + 0x24]
        fcomp dword ptr [DAT_0080da60]
        fnstsw  ax
        test    ah, 1
        jnz     loc_5d06ce
        fild    dword ptr [esp + 0x14]
        fcom dword ptr [DAT_0080da5c]
        fnstsw  ax
        test    ah, 1
        jnz     loc_5d06cc
        fld     dword ptr [esp + 0x24]
        fcomp dword ptr [DAT_0080da58]
        fnstsw  ax
        test    ah, 1
        jz      loc_5d06cc
        fcomp dword ptr [DAT_0080da54]
        fnstsw  ax
        test    ah, 1
        jz      loc_5d06ce
        mov eax, dword ptr [DAT_007f2440]
        mov     edx, dword ptr [eax + 0x3c]
        mov     edx, dword ptr [edx + 8]
        mov     esi, dword ptr [esp + 0x18]
        mov     si, word ptr [edx + esi]
        mov     eax, dword ptr [eax + 0x3c]
        mov     eax, dword ptr [eax + 8]
        add     ecx, ebp
        mov     edx, esi
        or      edx, 0x40
        mov     word ptr [eax + ecx*2 + 0x200], dx
        mov ecx, dword ptr [DAT_0080daa8]
        call    FUN_00416110
        xor     edx, edx
        cmp     eax, edx
        jz      loc_5d05e1
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebx
        mov     word ptr [eax + 8], si
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x10], edx
        jmp     loc_5d05e3
loc_5d05e1:
        xor     eax, eax
loc_5d05e3:
        mov     ebx, dword ptr [edi + 0x4d0]
        lea     ecx, [edi + 0x4d0]
        mov     edi, dword ptr [edi + 0x4cc]
        cmp     edi, ebx
        mov     dword ptr [esp + 0x28], eax
        jz      loc_5d0617
        cmp     edi, edx
        jz      loc_5d0603
        mov     dword ptr [edi], eax
loc_5d0603:
        mov     ecx, dword ptr [esp + 0x10]
        add     edi, 4
        mov     dword ptr [ecx + 0x4cc], edi
        mov     edi, ecx
        jmp     loc_5d06ce
loc_5d0617:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax + 0x4c8]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x38], 1
        mov     dword ptr [esp + 0x3c], eax
        lea     ecx, [esp + 0x38]
        jc      loc_5d0641
        lea     ecx, [esp + 0x3c]
loc_5d0641:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x3c], eax
        jz      loc_5d065d
        lea     ecx, [eax*4]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     loc_5d065f
loc_5d065d:
        xor     ebp, ebp
loc_5d065f:
        mov     edx, dword ptr [esp + 0x40]
        push    edx
        push    ebp
        push    edi
        push    esi
        call    FUN_005d6820
        add     esp, 0x10
        test    eax, eax
        jz      loc_5d0679
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ecx
loc_5d0679:
        mov     edx, dword ptr [esp + 0x40]
        push    edx
        add     eax, 4
        push    eax
        push    edi
        push    edi
        call    FUN_005d6820
        sub     ebx, esi
        add     esp, 0x10
        sar     ebx, 2
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        mov     dword ptr [esp + 0x40], esi
        lea     esi, [eax + 0x4d0]
        mov     ecx, esi
        call    FUN_005d6660
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x3c]
        lea     edx, [ebp + ecx*4]
        mov     dword ptr [eax + 0x4c8], ebp
        mov     ebp, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x4cc], edi
        mov     dword ptr [esi], edx
        mov     edi, eax
        jmp     loc_5d06ce
loc_5d06cc:
        fstp    st(0)
loc_5d06ce:
        mov     ebx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x30]
        inc     ebx
        add     esi, 0x400
        add     ecx, 0x200
        cmp     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x2c], ecx
        jle     loc_5d0547
        mov     ebx, dword ptr [esp + 0x40]
loc_5d0703:
        mov     eax, dword ptr [esp + 0x34]
        inc     ebp
        cmp     ebp, eax
        mov     dword ptr [esp + 0x1c], ebp
        jle     loc_5d0512
loc_5d0714:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [edi + 0x4b4]
        add     eax, 4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x20], eax
        jnz     loc_5d0475
        pop     esi
        pop     ebp
        pop     ebx
loc_5d0735:
        pop     edi
        add     esp, 0x34
        ret
    }


}
