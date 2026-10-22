/*
 * FUN_006da070 (994 B) — Pure integer/bitfield arithmetic routine.
 * No external calls, no absolute data refs, no vtable. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006da070(void)
{
    __asm {
        sub     esp, 0x60
        mov     edx, dword ptr [esp + 0x64]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x84]
        mov     ecx, eax
        sar     edi, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [edx + 0x28]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, eax
        sar     edi, cl
        mov     ebp, dword ptr [edx + 0x24]
        mov     ebx, dword ptr [edx + 0x30]
        mov     dword ptr [esp + 0x84], edi
        mov     edi, dword ptr [edx + 0x2c]
        sar     edi, cl
        mov     dword ptr [esp + 0x10], edi
        mov     edi, dword ptr [edx + 0x34]
        mov     edx, dword ptr [edx + 0x38]
        sar     edi, cl
        sar     edx, cl
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x14], edi
        lea     edi, [eax + eax*0x1]
        sub     ecx, edi
        add     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esi + 0x1c]
        lea     edi, [eax + eax*0x1]
        sub     ecx, edi
        add     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, eax
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x18]
        sub     ecx, eax
        mov     dword ptr [esp + 0x6c], edx
        mov     dword ptr [esp + 0x28], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x74], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esp + 0x28]
        dec     eax
        not     eax
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     edi, dword ptr [eax + 0x10]
        mov     esi, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x60], eax
        mov     eax, dword ptr [esi + 0x10]
        add     eax, 0x2
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [esp + 0x74]
        mov     dword ptr [esp + 0x68], esi
        mov     esi, dword ptr [esp + 0x10]
        add     edi, 0x2
        sub     eax, esi
        mov     dword ptr [esp + 0x64], edi
        mov     dword ptr [esp + 0x24], eax
        xor     ecx, ecx
        mov     cl, byte ptr [ebp]
        mov     dword ptr [esp + 0x18], 0x0
        mov     esi, ecx
        imul    esi, eax
        xor     eax, eax
        mov     al, byte ptr [edi + ebp*0x1]
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x1]
        imul    eax, dword ptr [esp + 0x10]
        imul    ecx, dword ptr [esp + 0x24]
        add     esi, eax
        xor     eax, eax
        mov     al, byte ptr [edi + ebp*0x1 + 0x1]
        mov     edi, dword ptr [esp + 0x28]
        imul    eax, dword ptr [esp + 0x10]
        add     eax, ecx
        sub     edi, dword ptr [esp + 0x84]
        mov     ecx, eax
        imul    edi, esi
        imul    ecx, dword ptr [esp + 0x84]
        sub     eax, esi
        mov     esi, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x38], eax
        xor     eax, eax
        mov     al, byte ptr [ebx]
        sub     esi, edx
        add     edi, ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x2c], esi
        imul    eax, esi
        mov     esi, dword ptr [esp + 0x3c]
        mov     cl, byte ptr [esi + ebx*0x1]
        imul    ecx, edx
        add     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + ebx*0x1 + 0x1]
        mov     esi, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x74], eax
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x1]
        imul    edx, dword ptr [esp + 0x2c]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x14]
        sub     esi, edx
        imul    esi, eax
        mov     eax, ecx
        imul    eax, edx
        sub     ecx, dword ptr [esp + 0x74]
        add     esi, eax
        mov     eax, dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0x40], ecx
        sub     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x80], ecx
L_006da22c:
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, esi
        sar     eax, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, edi
        sar     edx, cl
        add     edi, dword ptr [esp + 0x38]
        add     eax, edx
        sub     esi, dword ptr [esp + 0x40]
        test    eax, eax
        mov     dword ptr [esp + 0x74], eax
        jz      L_006da326
        test    eax, 0xffffff00
        jz      L_006da261
        mov     dword ptr [esp + 0x74], 0xff
L_006da261:
        mov     eax, dword ptr [esp + 0x80]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x78], ecx
        mov     ecx, dword ptr [esp + 0x18]
        xor     eax, eax
        mov     ax, word ptr [edx + ecx*0x2]
        mov     edx, dword ptr [esp + 0x74]
        __emit 0x8D /* __emit: no-base SIB lea ecx,[edx*8+0] (8D 0C D5 00 00 00 00); MSVC6 re-bases via EBX */
        __emit 0x0C
        __emit 0xD5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x7c], ecx
        mov     ecx, dword ptr [esp + 0x74]
        mov     edx, 0xff
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x34], eax
        shr     eax, 0x5
        shr     ecx, 0x8
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x4c], ecx
        and     ecx, 0xff
        imul    ecx, edx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x34]
        and     eax, 0xff00
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [esp + 0x4c]
        shr     ecx, 0x2
        and     eax, 0xff00
        imul    eax, edx
        and     ecx, 0xffffff00
        imul    ecx, dword ptr [esp + 0x7c]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x78]
        and     eax, 0xff
        mov     dword ptr [esp + 0x74], edx
        imul    eax, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x74], eax
        mov     eax, dword ptr [esp + 0x34]
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x7c]
        and     ecx, 0xff0000
        or      edx, ecx
        mov     ecx, dword ptr [esp + 0x74]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x80]
        shr     ecx, 0x8
        or      edx, ecx
        mov     dword ptr [eax], edx
L_006da326:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x80]
        mov     ecx, dword ptr [esp + 0x54]
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x80], edx
        jge     L_006da44a
        mov     eax, dword ptr [esp + 0x20]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jg      L_006da370
        mov     eax, dword ptr [esp + 0x58]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, eax
        neg     ecx
        lea     ecx, [edx + ecx*0x2]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], eax
L_006da370:
        mov     eax, dword ptr [esp + 0x84]
        mov     ecx, dword ptr [esp + 0x5c]
        inc     eax
        __emit 0x85 /* __emit: MSVC6 encodes test eax,ecx as 85 C1 (operand swap); ref needs 85 C8 */
        __emit 0xC8
        mov     dword ptr [esp + 0x84], eax
        jz      L_006da3db
        mov     edx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [edx + 0x20]
        mov     edi, dword ptr [esp + 0x10]
        add     ebp, eax
        mov     eax, dword ptr [esp + 0x64]
        xor     edx, edx
        mov     dl, byte ptr [ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp*0x1]
        mov     dword ptr [esp + 0x84], 0x0
        imul    edx, dword ptr [esp + 0x24]
        imul    ecx, edi
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + ebp*0x1 + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, edi
        mov     dl, byte ptr [ebp + 0x1]
        mov     edi, ecx
        imul    edi, dword ptr [esp + 0x28]
        imul    edx, dword ptr [esp + 0x24]
        add     eax, edx
        sub     eax, ecx
        mov     dword ptr [esp + 0x38], eax
L_006da3db:
        dec     dword ptr [esp + 0x14]
        jns     L_006da22c
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x68]
        mov     esi, dword ptr [esp + 0x6c]
        dec     eax
        mov     dword ptr [esp + 0x74], eax
        xor     edx, edx
        mov     dword ptr [esp + 0x14], eax
        sub     ebx, dword ptr [ecx + 0x20]
        mov     dl, byte ptr [ebx]
        mov     eax, dword ptr [esp + 0x3c]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebx*0x1]
        imul    edx, dword ptr [esp + 0x2c]
        imul    ecx, esi
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + ebx*0x1 + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, esi
        mov     dl, byte ptr [ebx + 0x1]
        mov     esi, dword ptr [esp + 0x30]
        imul    edx, dword ptr [esp + 0x2c]
        add     eax, edx
        sub     esi, dword ptr [esp + 0x74]
        mov     edx, eax
        imul    esi, ecx
        imul    edx, dword ptr [esp + 0x74]
        add     esi, edx
        sub     eax, ecx
        mov     dword ptr [esp + 0x40], eax
        jmp     L_006da22c
L_006da44a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
    }
}
