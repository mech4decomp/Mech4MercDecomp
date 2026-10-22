/*
 * FUN_00658200 (397 B) — __fastcall (ECX=param_1), RET.
 *
 * Iterates a path-point table; for each point whose grid cell is invalid,
 * prompts the user and removes the point.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */

extern int g_007dab44;
extern int g_007dab40;
extern void *g_0076b420;   /* sprintf IAT */
extern void *g_0076b598;   /* MessageBoxA IAT */

__declspec(naked) void __fastcall FUN_00658200(int param_1)
{
    __asm {
        sub     esp, 0x114
        mov     eax, dword ptr [g_007dab44]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x3c]
        test    ecx, ecx
        jle     L_658385
        mov     eax, dword ptr [eax + 0x38]
        push    ebx
        push    ebp
        push    esi
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ecx
L_658239:
        mov     ecx, dword ptr [eax + 0x14]
        call    FUN_0041fd80
        mov     ebp, eax
        test    ebp, ebp
        jz      L_658368
        mov     esi, dword ptr [ebp + 0x168]
        cmp     esi, dword ptr [ebp + 0x16c]
        mov     dword ptr [esp + 0x10], 0x0
        jz      L_658368
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edx + 0x3c]
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x1c], ecx
        lea     ebx, [esi + 0xc]
L_658276:
        fld     dword ptr [esi + 0x8]
        call    FUN_0075db4a
        fld     dword ptr [esi]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     edi, edx
        shl     edi, 0x9
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        add     edx, edi
        shr     ecx, 0x1f
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     al, byte ptr [edx + ecx*2 + 0x40200]
        and     al, 0x3f
        cmp     al, 0x3f
        jnz     L_65834b
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 0x10]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        push    0x794a30
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        push    0x4
        push    0x794a24
        lea     edx, [esp + 0x2c]
        push    edx
        push    0x0
        call    dword ptr [g_0076b598]
        cmp     eax, 0x6
        jnz     L_65834b
        mov     edi, dword ptr [ebp + 0x16c]
        cmp     ebx, edi
        jz      L_65833c
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_65833c
L_658325:
        lea     eax, [esi + 0x14]
        mov     ecx, dword ptr [eax - 0x8]
        mov     dword ptr [eax - 0x14], ecx
        mov     ecx, dword ptr [eax - 0x4]
        mov     dword ptr [eax - 0x10], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [eax - 0xc], ecx
        add     eax, 0xc
        dec     edx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (emits 75 E6, ref 75 E9) */
        __emit 0xE9
L_65833c:
        add     edi, -0xc
        sub     esi, 0xc
        mov     dword ptr [ebp + 0x16c], edi
        sub     ebx, 0xc
L_65834b:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebp + 0x16c]
        add     esi, 0xc
        add     ebx, 0xc
        inc     ecx
        cmp     esi, eax
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_658276
L_658368:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        add     eax, 0x1c
        dec     ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ecx
        jnz     L_658239
        pop     esi
        pop     ebp
        pop     ebx
L_658385:
        pop     edi
        add     esp, 0x114
        ret
    }
}
